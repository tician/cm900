/*
  Dynamixel read/write exmaples

  Reads an dynaixel current position, and set goal position
  turn left and right repeatly. 


  created 14 Nov. 2012
  by Sangmin Lee

  ported to CM9
  by ROBOTIS 
  www.robotis.com
*/

#define	COMM_TXSUCCESS        (0)
#define COMM_RXSUCCESS        (1)
#define COMM_TXFAIL           (2)
#define COMM_RXFAIL           (3)
#define COMM_TXERROR          (4)
#define COMM_RXWAITING        (5)
#define COMM_RXTIMEOUT        (6)
#define COMM_RXCORRUPT        (7)

#define P_GOAL_POSITION_L     30
#define P_GOAL_POSITION_H     31
#define P_PRESENT_POSITION_L  36
#define P_PRESENT_POSITION_H  37
#define P_MOVING              46

#define DXL_BAUDRATE_NUMBER 1  // number = 1 is 1000000 bps, 34 is 57600 bps

word  Position;
word  wPresentPos;
byte  INDEX = 0;
byte  bMoving, CommStatus;
byte  id = 1;
word  GoalPos[2] = {0, 1023};

void setup() {
  Dxl.begin(DXL_BAUDRATE_NUMBER);
  //print to USB Virtual COM port, open serial monitor
  SerialUSB.begin();
}

void loop() {
  bMoving = Dxl.readByte( id, P_MOVING);
  CommStatus = Dxl.getResult();
  if( CommStatus == COMM_RXSUCCESS ){
    if( bMoving == 0 ){
      // Change goal position
      if( INDEX == 0 )
       	INDEX = 1;
      else
      	INDEX = 0;
      // Write goal position
      Dxl.writeWord( id, P_GOAL_POSITION_L, GoalPos[INDEX] );
    }
    // Read present position
    wPresentPos = Dxl.readWord( id, P_PRESENT_POSITION_L );
    SerialUSB.print("Goal Position : ");
    SerialUSB.println(GoalPos[INDEX]);
    SerialUSB.print("Present position :");
    SerialUSB.println(wPresentPos);
    
  }else {
    SerialUSB.println("Fail");
  }
  delay(100);
}

