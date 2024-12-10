int pot = A0;
int led = 6;
int pwm;
int val ;
void setup() {
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(pot);
  Serial.println(val);
  pwm = int((255.0/1023)*val);
  Serial.println(pwm);
  analogWrite(led, pwm);
  delay(100);

}
