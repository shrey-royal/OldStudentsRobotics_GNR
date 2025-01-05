int b = 3;

void setup() {
  pinMode(b, OUTPUT);
}

void loop() {
  digitalWrite(b, HIGH);
  delay(1000);
  digitalWrite(b, LOW);
  delay(1000);
}

/*
int b = 3;

void setup() {
  pinMode(b, OUTPUT);
}

void loop() {
  tone(b, 400, 200);
  delay(400);
  tone(b, 700, 200);
  delay(200);
  tone(b, 100, 200);
  delay(200);
  tone(b, 500, 200);
  delay(200);
  tone(b, 900, 200);
  delay(200);
  delay(1000);
}
*/
