int s = 7;
int l = 13;
int ls = LOW, cs, ledState = LOW;

void setup() {
  pinMode(s, INPUT);
  pinMode(l, OUTPUT);

  // Serial.begin(9600);
}

void loop() {
  cs = digitalRead(s);
  if (ls == LOW && cs == HIGH) {
    ledState = !ledState;
    digitalWrite(l, ledState);
  }
  ls = cs;
}
