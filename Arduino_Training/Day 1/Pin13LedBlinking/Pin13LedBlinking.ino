int ledPin = 9;  // PWM pin connected to the LED
int brightness = 0;  // Variable to hold the brightness level

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);  // Start serial communication
  Serial.println("Enter a number (1, 2, 3, or 4) to set LED brightness:");
  Serial.println("1: 25% brightness");
  Serial.println("2: 50% brightness");
  Serial.println("3: 75% brightness");
  Serial.println("4: 100% brightness");
}

void loop() {
  // Check if data is available in the serial buffer
  if (Serial.available() > 0) {
    int userInput = Serial.parseInt();  // Get user input (integer)
    
    // If input is valid, map it to brightness
    switch (userInput) {
      case 1:
        brightness = 64;  // 25% brightness
        break;
      case 2:
        brightness = 128;  // 50% brightness
        break;
      case 3:
        brightness = 192;  // 75% brightness
        break;
      case 4:
        brightness = 255;  // 100% brightness
        break;
      default:
        Serial.println("Invalid input. Please enter a number between 1 and 4.");
        return;
    }

    analogWrite(ledPin, brightness);  // Set the LED brightness
    Serial.print("LED brightness set to: ");
    Serial.println(brightness);  // Print the brightness level
  }
}
