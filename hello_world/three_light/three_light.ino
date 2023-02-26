int led1 = 5;
int led2 = 6;
int led3 = 7;
int btn = 8;

int btnState = 0;
int nxtLed = 1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btnState = digitalRead(btn);

  // Get button
  if (btnState == HIGH) {
    // Button is pressed
    switch (nxtLed) {
      case 1:
        blinkLED(led1);
        nxtLed = 2;
        break;
      case 2:
        blinkLED(led2);
        nxtLed = 3;    
        break;
      case 3:
        blinkLED(led3);
        nxtLed = 1;
        break;
      default:
        nxtLed = 1;
        break;
    }
    
  } else {
    // Button not pressed
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

}

void blinkLED(int pin) {
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250);
}