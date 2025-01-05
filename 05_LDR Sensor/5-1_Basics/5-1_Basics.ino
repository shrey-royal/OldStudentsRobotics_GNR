int ldr = 7, led = 13;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int status = digitalRead(ldr);

  if(status == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Lights are OFF!");
  } else {
    digitalWrite(led, LOW);
    Serial.println("Lights are ON!");
  }
}
