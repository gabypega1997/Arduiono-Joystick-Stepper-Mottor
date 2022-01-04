// in this program , the speed change with light intensity ( lower speed with less light)

#include <Stepper.h>

  Stepper myStepper(32,2,4,3,5); // stepper motor sequence 1-3-2-4 

  int sensorPin = A0; // select the input pin for LDR
  int sensorValue;  //intialize the value to save LDR value
  int motorSpeed;   //intialize the value for the motor speed
  int direction=32; // direction is (positive-clockwise)and it has a value of 32


void setup() {
  
   Serial.begin(9600);   // initialize the serial port:
   pinMode(sensorPin,INPUT); // setting sensor pin as input
   analogReference(DEFAULT);  // set the ADC reference as 5v
}

void loop() {
      
    
  sensorValue = analogRead(sensorPin); // read the value from the sensor
  
  Serial.print("LDR Values  = "); 
  Serial.print(sensorValue);// printing the values read from the sensor 

  motorSpeed=map(sensorValue,0,1023,0,600);

  Serial.print(" | Motor Speed is  = ");
  Serial.println(motorSpeed); // printing the mapped values of the Motor 


  myStepper.setSpeed(motorSpeed);
  myStepper.step(direction);

}
