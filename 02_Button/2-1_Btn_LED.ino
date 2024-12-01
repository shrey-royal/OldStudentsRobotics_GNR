void btnLedSetup() {
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void btnLedLoop() {
  currState = digitalRead(btnPin);

  if (currState == HIGH) {
    digitalWrite(led, LOW);
  }

  if (currState == LOW) {
    digitalWrite(led, HIGH);
  }
}