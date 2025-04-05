void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Comms Established!");
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    // Serial.println(command);

    if (command == "LED OFF") {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED is turned OFF");
    } else if (command == "LED ON") {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED is turned ON");
    }
  }
}
