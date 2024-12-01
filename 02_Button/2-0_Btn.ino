void btnStateSetup(int btnPin) {
  Serial.begin(9600);
  pinMode(btnPin, INPUT_PULLUP);
}

void btnStateLoop(int btnPin) {
  currState = digitalRead(btnPin);
  /*
  Serial.print("lastState: ");
  Serial.print(lastState);
  Serial.print("\t -> currState: ");
  Serial.println(currState);
  */
  
  if (lastState == LOW && currState == HIGH) {
    Serial.println("The state changed from LOW to HIGH -> Button RELEASED");
  } else if (lastState == HIGH && currState == LOW) {
    Serial.println("The state changed from HIGH to LOW -> Button PRESSED");
  }
  lastState = currState;
}
