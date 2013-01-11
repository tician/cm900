/*
 Dynamixel Basic Example

 Turns left the dynamixel , then turn right for one second,
 repeatedly.

 Ported to CM9 from the ROBOTIS Sample 21 Oct 2012
 By Sangmin Lee
*/
#define DXL_ID 1
#define DXL_BAUDRATE_NUMBER 1  // number = 1 is 1000000 bps, 34 is 57600 bps
#define P_GOAL_POSITION_L 30

word GoalPos[2]={100,1023};

void setup() {
    // Set up the built-in LED pin as an output:
    Dxl.begin(DXL_BAUDRATE_NUMBER);
}

void loop() {
    delay(1000);              // Wait for 1 second (1000 milliseconds)
    Dxl.writeWord(DXL_ID, P_GOAL_POSITION_L, GoalPos[0]); //Turn dynamixel ID 1 to position 100
    delay(1000);              // Wait for 1 second (1000 milliseconds)
    Dxl.writeWord(DXL_ID, P_GOAL_POSITION_L, GoalPos[1]);//Turn dynamixel ID 1 to position 1000
}
