/*
  BioloidController.h - ArbotiX Library for Bioloid Pose Engine
  Copyright (c) 2008-2012 Michael E. Ferguson.  All right reserved.

  Copyright (c) 2012, 2013 Matthew Paulishen. Copypaster: NaN a.k.a. tician

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

#ifndef BioloidController_h
#define BioloidController_h

/* poses (avr):
 *  PROGMEM prog_uint16_t name[] = {4,512,512,482,542}; // first number is # of servos
 * sequences:
 *  PROGMEM transition_t name[] = {{NULL,count},{pose_name,1000},...} 
 */

#define PROGMEM	__FLASH__
// http://leaflabs.com/docs/arm-gcc.html#arm-gcc-attribute-flash
#include <wirish_types.h>
typedef const unsigned short prog_uint16_t;
#define pgm_read_word_near(x) (*(prog_uint16_t*)x)
#define pgm_read_word(x) (*(prog_uint16_t*)x)

#ifdef USING_NEWER_POSES
/* poses (arm):
 *   prog_uint16_t Sitdown_1[] __FLASH__ = {8,248,775,31,992,763,260,512,512};	//wait:0.000	//move:1.000
 * number of servos and servo IDs in sequence (new):
 *   prog_uint16_t Sitdown_id[] __FLASH__ = {8,11,12,13,14,15,16,17,18};
 * sequence (new):
 *   transition_t Sitdown[] __FLASH__ = {{Sitdown_id,1},{Sitdown_1,1000}};
 *
 * transition_t => {{array_num_servos_and_ids, num_poses_in_sequence},{pose_1,time_length_ms},...};
 */
#else
/* poses (arm):
 *  prog_uint16_t name[] __FLASH__ = {4,512,512,482,542}; // first number is # of servos
 * sequences:
 *  transition_t name[] __FLASH__ = {{NULL,count},{pose_name,1000},...} 
 */
#endif




#include "dxl_core.h"

/* pose engine runs at 30Hz (33ms between frames) 
   recommended values for interpolateSetup are of the form X*BIOLOID_FRAME_LENGTH - 1 */
#define BIOLOID_FRAME_LENGTH      33
/* we need some extra resolution, use 13 bits, rather than 10, during interpolation */
#define BIOLOID_SHIFT             3

/** a structure to hold transitions **/
typedef struct{
    unsigned int * pose;    // addr of pose to transition to 
    int time;               // time for transition
} transition_t; 

/** Bioloid Controller Class for STM32 clients. **/
class BioloidController
{
  public:
    /* New-style constructor/setup */ 
    BioloidController() {};
    void setup(int servo_cnt);

    /* Pose Manipulation */
    void loadIdent( const unsigned int * addr );// load the number of servos and IDs from FLASH
    void loadPose( const unsigned int * addr ); // load a named pose from FLASH  
    void readPose();                            // read a pose in from the servos  
    void writePose();                           // write a pose out to the servos
    int getCurPose(int id);                     // get a servo value in the current pose
    int getNextPose(int id);                    // get a servo value in the next pose
    void setNextPose(int id, int pos);          // set a servo value in the next pose
    void setId(int index, int id);              // set the id of a particular storage index
    int getId(int index);                       // get the id of a particular storage index


    /* Pose Engine */
    void interpolateSetup(int time);            // calculate speeds for smooth transition
    void interpolateStep();                     // move forward one step in current interpolation  
    unsigned char interpolating;                // are we in an interpolation? 0=No, 1=Yes
    unsigned char runningSeq;                   // are we running a sequence? 0=No, 1=Yes 
    int poseSize;                               // how many servos are in this pose, used by Sync()
    int sequenceSize;                           // how many servos are in this sequence, used by Sync()
    /* to interpolate:
     *  bioloid.loadPose(myPose);
     *  bioloid.interpolateSetup(67);
     *  while(bioloid.interpolating > 0){
     *      bioloid.interpolateStep();
     *      delay(1);
     *  }
     */

    /* Sequence Engine */
    void playSeq( const transition_t * addr );  // load a sequence and play it from FLASH
    void play();                                // keep moving forward in time
    unsigned char playing;                      // are we playing a sequence? 0=No, 1=Yes

    /* to run the sequence engine:
     *  bioloid.playSeq(walk);
     *  while(bioloid.playing){
     *      bioloid.play();
     *  }
     */
    
  private:  
    unsigned int * pose_;                       // the current pose, updated by Step(), set out by Sync()
    unsigned int * nextpose_;                   // the destination pose, where we put on load
    int * speed_;                               // speeds for interpolation 
    unsigned char * id_;                        // servo id for this index

    unsigned long lastframe_;                   // time last frame was sent out  
    
    transition_t * sequence;                    // sequence we are running
    int transitions;                            // how many transitions we have left to load
   
};
#endif
