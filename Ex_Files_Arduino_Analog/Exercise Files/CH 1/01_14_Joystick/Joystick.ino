int xPin=A0;
int yPin=A1;
int KeyPin=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(KeyPin,INPUT_PULLUP);
  digitalWrite(KeyPin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.print(" X= ");
 Serial.print(analogRead(xPin));
 Serial.print(" |Y = ");
 Serial.print(analogRead(yPin));
 Serial.print(" |Z = ");
 Serial.println(digitalRead(KeyPin));

 delay(500);
}
