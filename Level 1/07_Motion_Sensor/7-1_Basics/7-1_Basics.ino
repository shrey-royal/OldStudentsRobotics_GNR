int pir = 7;
int cs, ls;

void setup() {
  Serial.begin(9600);
  pinMode(pir, INPUT);
}

void loop() {
  cs = digitalRead(pir);
  // Serial.println(cs);

  if (ls == LOW && cs == HIGH) {
    Serial.println("Motion Detected!");
  } else if (ls == HIGH && cs == LOW) {
    Serial.println("Motion Stopped!");
  }
  ls = cs;
}
