int led = LED_BUILTIN;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Communications Established!");
}

void loop() {
  if(Serial.available()) {
    char user_input = Serial.read();
    if (user_input == '1') {
      digitalWrite(led, HIGH);
    } else if (user_input == '0') {
      digitalWrite(led, LOW);
    }
  }
}
