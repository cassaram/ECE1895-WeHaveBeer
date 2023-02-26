//Nathan Evans

int led = 7;
int btn = 8;

int btnState = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btnState = digitalRead(btn);

  // Get button
  if (btnState == HIGH) {
    // Button is pressed
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
  } else {
    // Button not pressed
    digitalWrite(led, LOW);
  }

}
