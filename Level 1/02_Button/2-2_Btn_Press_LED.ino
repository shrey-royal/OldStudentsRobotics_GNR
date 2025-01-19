void btnPressSetup() {
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void btnPressLoop() {
  currState = digitalRead(btnPin);

  if(lastState == HIGH && currState == LOW) {
    ledState = !ledState;
    digitalWrite(led, ledState);
  }
  lastState = currState;
  delay(50);  //debounce delay
}