#include <Stepper.h>

 Stepper myStepper(32,2,4,3,5); // stepper motor sequence 1-3-2-4

 int xPin = A0; //X-axis attach to A0
 int xValue;   //intialiaze a varibale to save the data from the X-axis from the joystick
 int yPin = A1; //Y-axis attach to A1
 int yValue; //intialiaze a varibale to save the data from the Y-axis from the joystick
 int keyPin = 8; //Z-axis attach to digital 8

 int direction; // intitalize direction variable


void setup() {
 
  Serial.begin(9600);   // initialize the serial port:
  pinMode(keyPin,INPUT_PULLUP);//set KeyPin as INPUT
}

void loop() {


   xValue=analogRead(xPin); // take the reading for the x axis from joystick and save them in Xvalue

  int motorSpeed=0;

  if(xValue >=520)
  {
    motorSpeed=map(xValue,520,1023,0,600);
    direction=1;
  }

  if(xValue<510)
  {
    motorSpeed=map(xValue,0,510,600,0);
    direction=-1;
  }

if(motorSpeed>0)
{
  myStepper.setSpeed(motorSpeed);
  myStepper.step(direction);
}
  
  

}
