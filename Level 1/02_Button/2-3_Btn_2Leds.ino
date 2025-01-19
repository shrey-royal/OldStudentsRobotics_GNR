void btn2LedsSetup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(btnPin, INPUT_PULLUP);
}

void btn2LedsLoop() {
  currState = digitalRead(btnPin);

  if (lastState == HIGH && currState == LOW) {
    if (ledState == 0) {
      digitalWrite(l1, HIGH);
      digitalWrite(l2, LOW);
    }
    if (ledState == 1) {
      digitalWrite(l1, LOW);
      digitalWrite(l2, HIGH);
    }
    ledState = !ledState;
  }
  lastState = currState;
  delay(50);
}