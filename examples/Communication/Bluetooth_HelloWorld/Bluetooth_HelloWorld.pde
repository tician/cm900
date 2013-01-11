/*
  Bluetooth port print out "Hello World!!" to PC 
  You can see it any terminal program, putty, TeraTerm, Hyper Terminal, etc...

  CM900's USART2 pins(2,3) are connected to Bluetooth/Zigbee connector.
  To use bluetooth or zigbee on CM900, you can buy BT110(Bluetooth) or Zig110(Zigbee) as option
  
  created 14 Nov. 2012
  by Sangmin Lee

*/

void setup() {
  //Initialize USB Serial
  Serial2.begin(57600);
}
int nCount=0;
void loop() {
    //print "Hello World!!" to PC though USB Virtual COM port
    Serial2.println("Hello World!!");
    Serial2.print("nCount : "); // display nCount variable and increase nCount.
    Serial2.println(nCount++);
    delay(1000);
}

