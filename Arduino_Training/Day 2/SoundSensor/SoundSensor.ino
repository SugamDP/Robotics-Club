int mic = 7;
int led = 6;
int mic_state;
int led_state = 0;
void setup() {
  pinMode(mic, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  mic_state = digitalRead(mic);
  Serial.println(mic_state);
  if(mic_state)
  {
    Serial.println("Sound Detected!");
    led_state = !led_state;
    digitalWrite(led, led_state);
  }
  delay(200);
}
