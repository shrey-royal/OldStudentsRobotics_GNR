int m1 = 7;
int m2 = 6;
int en = 5;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(en, OUTPUT);

  digitalWrite(en, HIGH); // This turns the motor driver ON
}

void loop() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  delay(1000);

  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  delay(1000);

  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  delay(1000);

  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  delay(1000);

  digitalWrite(en, LOW);
}