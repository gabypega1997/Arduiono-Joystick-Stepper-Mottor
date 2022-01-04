//In this project we are using Joystick  WITH leds
// Red LED for X axis 
// Blue LED for Y axis
// Yellow LED for Z axis

const int xPin = A0; //X-axis attached to A0
int xValue; // to save the values when reading from the analog Pin A0
const int yPin = A1; //Y-axis attached to A1
int yValue; // to save the values when reading from the analog Pin A1
const int keyPin = 8; //for z axis attached to digital pin number 8

int redLED=6; //red LED connect to pin 6
int redX; //redX to save the Mapped value for red LED
int blueLED=5; // blue LED connect to Pin 5
int blueY; //blueY to save the Mapped value for blue LED
int yellowLED=3; // yellow LED connect to pin 3
int yellowZ; //yellowZ to save the  value for red LED

void setup()
{
  pinMode(keyPin,INPUT_PULLUP);//set keyPin as INPUT
  pinMode(yellowLED,OUTPUT); // Set yellow led as an output
  pinMode(blueLED,OUTPUT);  // Set blue led as an output
  pinMode(redLED,OUTPUT);   // Set red led as an output
  
    Serial.begin(9600); //initialize serial monitor
}

void loop()
{
  Serial.print(" X= "); //print "X: "

  
  Serial.print(" |Y= "); //print "|Y: "

  
  Serial.print(" |Z= "); //print "|Z: "

 
  delay(500); //delay 500ms
}
