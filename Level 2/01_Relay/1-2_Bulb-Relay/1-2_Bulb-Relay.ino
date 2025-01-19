int b=2, f=4, btn=7, ls = HIGH, cs, state = HIGH;

void setup() {
  pinMode(b, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(btn, INPUT_PULLUP);

  digitalWrite(b, state);
  digitalWrite(f, state);
}

void loop() {
  cs = digitalRead(btn);
  if (ls == HIGH && cs == LOW) {
    state = !state;
    digitalWrite(b, state);
    digitalWrite(f, state);
  }
  ls = cs;
  delay(50);
}
