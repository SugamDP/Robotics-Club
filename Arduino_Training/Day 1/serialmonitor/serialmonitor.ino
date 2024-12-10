int ledState = 0;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n'); 

    input.trim();
    Serial.println("inside if");

    if (input == "1") {
      digitalWrite(13, HIGH);
    } else if (input == "0") {
      digitalWrite(13, LOW);
    } else {
      Serial.println("Invalid input. Enter 1 to turn ON or 0 to turn OFF the LED.");
    }
  }
  delay(100);
}
