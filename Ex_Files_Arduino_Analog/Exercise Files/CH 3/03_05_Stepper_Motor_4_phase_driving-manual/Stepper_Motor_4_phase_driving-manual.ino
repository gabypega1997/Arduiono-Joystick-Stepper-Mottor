
int motorpin1=8;
int motorpin2=9;
int motorpin3=10;
int motorpin4=11;

int delaytime=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  pinMode(motorpin3,OUTPUT);
  pinMode(motorpin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(motorpin1,HIGH);
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,LOW);
    digitalWrite(motorpin4,LOW);
    delay(delaytime);
    
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,HIGH);
    digitalWrite(motorpin3,LOW);
    digitalWrite(motorpin4,LOW);

        delay(delaytime);
    
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,HIGH);
    digitalWrite(motorpin4,LOW);
        delay(delaytime);
    
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,LOW);
    digitalWrite(motorpin4,HIGH);

    delay(delaytime);


}
