int analogPin=A0;
int ledPin=9;
int inputValue;
int outputValue=0;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledPin,OUTPUT);
 pinMode(analogPin,INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  inputValue=analogRead(analogPin);
  outputValue=map(inputValue,0,1023,0,255);
  analogWrite(ledPin,outputValue);
}
