int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

int count2 = 0;
int count3 = 0;

int led2_state = 0;
int led3_state = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  for (int i = 1; i <= 16; i++) {
    // LED1
    if (i % 2 == 0) {
      digitalWrite(led1, HIGH);
    } else {
      digitalWrite(led1, LOW);
    }

    // LED4
    if (i <= 8) {
      digitalWrite(led4, LOW);
    } else {
      digitalWrite(led4, HIGH);
    }

    // LED2
    count2++;
    if (count2 > 2) {
      count2 = 1;
      led2_state = !led2_state; 
      digitalWrite(led2, led2_state);
    }

    // LED3
    count3++;
    if (count3 > 4) {
      count3 = 1;
      led3_state = !led3_state; 
      digitalWrite(led3, led3_state);
    }

    delay(1000); // Delay for 1 second
  }

}
