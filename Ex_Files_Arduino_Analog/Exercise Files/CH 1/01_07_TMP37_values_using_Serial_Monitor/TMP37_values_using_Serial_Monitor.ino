int analogPin=A0;
float vout;
float temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReference(DEFAULT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int a=analogRead(analogPin);
    vout=(a/1024.0)*5000;
    temp=vout/20;

    Serial.print(temp,1);
    Serial.write(0xC2);
    Serial.write(0xB0);
    Serial.println("C");

    delay(200);

  
}
