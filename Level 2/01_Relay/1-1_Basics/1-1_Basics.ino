int r = 2;

void setup() {
  pinMode(r, OUTPUT);
}

void loop() {
  digitalWrite(r, HIGH);
  delay(1000);
  
  digitalWrite(r, LOW);
  delay(1000);
}
