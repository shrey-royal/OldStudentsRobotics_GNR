int in_x, in_y, in_sw;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  in_x = analogRead(A0);
  in_y = analogRead(A1);
  in_sw = digitalRead(2);

  analogWrite(11, map(in_x, 0, 1023, 0, 255));

  Serial.print("X: ");
  Serial.print(in_x);
  Serial.print(", Y: ");
  Serial.print(in_y);
  Serial.print(", SW: ");
  Serial.print(in_sw);
  Serial.println();
}
