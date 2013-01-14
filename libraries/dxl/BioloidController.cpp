/*
  BioloidController.cpp - ArbotiX Library for Bioloid Pose Engine
  Copyright (c) 2008-2012 Michael E. Ferguson.  All right reserved.

  Copyright (c) 2012 Matthew Paulishen. Copypaster: NaN a.k.a. tician
    Contact at: bill.gates.is.a.douche@hotmail.com
      - Yes, the email account is real.
      - No, it is not very professional.
      - Why?  Because I was required to have a WindowsLive account
	      for registering MS Visual Studio

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "BioloidController.h"

#define AXM_GOAL_POSITION_L			30
#define AXM_PRESENT_POSITION_L		36

/* new-style setup */
void BioloidController::setup(int servo_cnt){
    int i;
    // setup storage
    id_ = (unsigned char *) malloc(servo_cnt * sizeof(unsigned char));
    pose_ = (unsigned int *) malloc(servo_cnt * sizeof(unsigned int));
    nextpose_ = (unsigned int *) malloc(servo_cnt * sizeof(unsigned int));
    speed_ = (int *) malloc(servo_cnt * sizeof(int));
    // initialize
    poseSize = servo_cnt;
    for(i=0;i<poseSize;i++){
        id_[i] = i+1;
        pose_[i] = 512;
        nextpose_[i] = 512;
    }
    interpolating = 0;
    playing = 0;
    lastframe_ = millis();
}
void BioloidController::setId(int index, int id){
    id_[index] = id;
}
int BioloidController::getId(int index){
    return id_[index];
}

// New function to get ident array and number of servo IDs
//  available to any pose in the sequence

/* load a named sequence's used servos from FLASH into ident. */
void BioloidController::loadIdent( const unsigned int * addr )
{
	if (addr == 0)//NULL)
		return;

    int i;
    int sequenceSize = pgm_read_word_near(addr); // number of servos in this sequence
	if (sequenceSize>poseSize)
		sequenceSize=poseSize;
    for(i=0; i<sequenceSize; i++)
        id_[i] = pgm_read_word_near(addr+1+i);
}


/* load a named pose from FLASH into nextpose. */
void BioloidController::loadPose( const unsigned int * addr )
{
    int i;
    poseSize = pgm_read_word_near(addr); // number of servos in this pose
    for(i=0; i<poseSize; i++)
        nextpose[i] = pgm_read_word_near(addr+1+i) << BIOLOID_SHIFT;
}
/* read in current servo positions to the pose. */
void BioloidController::readPose(){
    for(int i=0;i<poseSize;i++){
        pose_[i] = dxl_get_word(id_[i],AXM_PRESENT_POSITION_L)<<BIOLOID_SHIFT;
        delay(25);
    }
}
/* write pose out to servos using sync write. */
void BioloidController::writePose(){
    int temp;
    int length = 4 + (poseSize * 3);   // 3 = id + pos(2byte)
    int checksum = BROADCAST_ID + length + INST_SYNC_WRITE + 2 + AXM_GOAL_POSITION_L;

	dxl_set_txpacket_id( BROADCAST_ID );
	dxl_set_txpacket_instruction( INST_SYNC_WRITE );
	dxl_set_txpacket_length( length );
	dxl_set_txpacket_parameter( 0, AXM_GOAL_POSITION_L );
	dxl_set_txpacket_parameter( 1, 2 );	// writing two bytes
    for(int i=0; i<poseSize; i++)
    {
        temp = pose_[i] >> BIOLOID_SHIFT;
        checksum += (temp&0xff) + (temp>>8)&0xff + id_[i];
        dxl_set_txpacket_parameter( 2 + 3*i + 0, id_[i] );
        dxl_set_txpacket_parameter( 2 + 3*i + 1, (temp)&0xff );
        dxl_set_txpacket_parameter( 2 + 3*i + 2, (temp>>8)&0xff );
    }
    dxl_set_txpacket_parameter( 2 + 3*poseSize + 0, (~checksum)&0xff );
    dxl_txrx_packet();
}

/* set up for an interpolation from pose to nextpose over TIME 
    milliseconds by setting servo speeds. */
void BioloidController::interpolateSetup(int time){
    int i;
    int frames = (time/BIOLOID_FRAME_LENGTH) + 1;
    lastframe_ = millis();
    // set speed each servo...
    for(i=0;i<poseSize;i++){
        if(nextpose_[i] > pose_[i]){
            speed_[i] = (nextpose_[i] - pose_[i])/frames + 1;
        }else{
            speed_[i] = (pose_[i]-nextpose_[i])/frames + 1;
        }
    }
    interpolating = 1;
}
/* interpolate our pose, this should be called at about 30Hz. */
void BioloidController::interpolateStep(){
    if(interpolating == 0) return;
    int i;
    int complete = poseSize;
    while(millis() - lastframe_ < BIOLOID_FRAME_LENGTH);
    lastframe_ = millis();
    // update each servo
    for(i=0;i<poseSize;i++){
        int diff = nextpose_[i] - pose_[i];
        if(diff == 0){
            complete--;
        }else{
            if(diff > 0){
                if(diff < speed_[i]){
                    pose_[i] = nextpose_[i];
                    complete--;
                }else
                    pose_[i] += speed_[i];
            }else{
                if((-diff) < speed_[i]){
                    pose_[i] = nextpose_[i];
                    complete--;
                }else
                    pose_[i] -= speed_[i];                
            }       
        }
    }
    if(complete <= 0) interpolating = 0;
    writePose();      
}

/* get a servo value in the current pose */
int BioloidController::getCurPose(int id){
    for(int i=0; i<poseSize; i++){
        if( id_[i] == id )
            return ((pose_[i]) >> BIOLOID_SHIFT);
    }
    return -1;
}
/* get a servo value in the next pose */
int BioloidController::getNextPose(int id){
    for(int i=0; i<poseSize; i++){
        if( id_[i] == id )
            return ((nextpose_[i]) >> BIOLOID_SHIFT);
    }
    return -1;
}
/* set a servo value in the next pose */
void BioloidController::setNextPose(int id, int pos){
    for(int i=0; i<poseSize; i++){
        if( id_[i] == id ){
            nextpose_[i] = (pos << BIOLOID_SHIFT);
            return;
        }
    }
}

/* play a sequence. */
void BioloidController::playSeq( const transition_t  * addr ){
    sequence = (transition_t *) addr;

	// get the pointer to the ident array (stored in pose instead of NULL)
    loadIdent((const unsigned int *)pgm_read_word_near(&sequence->pose));

    // number of transitions left to load
    transitions = pgm_read_word_near(&sequence->time);
    sequence++;    
    // load a transition
    loadPose((const unsigned int *)pgm_read_word_near(&sequence->pose));
    interpolateSetup(pgm_read_word_near(&sequence->time));
    transitions--;
    playing = 1;
}
/* keep playing our sequence */
void BioloidController::play(){
    if(playing == 0) return;
    if(interpolating > 0){
        interpolateStep();
    }else{  // move onto next pose
        sequence++;   
        if(transitions > 0){
            loadPose((const unsigned int *)pgm_read_word_near(&sequence->pose));
            interpolateSetup(pgm_read_word_near(&sequence->time));
            transitions--;
        }else{
            playing = 0;
        }
    }
}

