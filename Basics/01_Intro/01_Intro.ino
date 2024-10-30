String message = "Hello, World!\n";
int led = LED_BUILTIN;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Comms Established!");
}

void loop() { 
  if(Serial.available() > 0) {
    message = Serial.readString();
  }
  Serial.print(message);
  digitalWrite(led, HIGH);
  delay(50);
  digitalWrite(led, LOW);
  delay(950);
}
