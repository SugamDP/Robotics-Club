int data;
int ledState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  data = digitalRead(8);
  Serial.println(data);
  if(data){
    Serial.println("Oi");
    ledState = !ledState;
    digitalWrite(13, ledState);
  }
  delay(250);
}
