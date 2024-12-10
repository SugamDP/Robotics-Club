int ledPin = 10;
int ledState = 0;

void setup() {

  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  Serial.println("Enter the desired brightness in range 0 to 4");
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n'); 
  input.trim();//Used to remove the delimiter(new line or tabs, etc. if present)
    if (input == "0") {
      analogWrite(ledPin, 0);
    } 
    else if (input == "1") {
      analogWrite(ledPin, 64);
    } 
    else if (input == "2") {
      analogWrite(ledPin, 128);
    } 
    else if (input == "3") {
      analogWrite(ledPin, 192);
    } 
    else if (input == "4"){
      analogWrite(ledPin, 255);
    }
    else {
      Serial.println("Invalid input. Enter 1 to turn ON or 0 to turn OFF the LED.");
    }
  }
  delay(1000);
}
