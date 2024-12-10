#include<Servo.h>
Servo myServo;
int pot = A0;
int val;
int angle;
void setup() {
  myServo.attach(7);
  pinMode(pot, INPUT);
  Serial.begin(9600);

}

void loop() {
  val = analogRead(pot);
  angle = int((180.0/1023)*val);
  Serial.println(angle);
  myServo.write(angle);

}
