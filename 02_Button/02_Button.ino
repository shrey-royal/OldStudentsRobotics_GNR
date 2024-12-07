int led = 0;
int btnPin = 7;
int lastState = HIGH;
int currState;
int ledState = LOW;
int l1 = 13, l2 = 12;

void setup() {
  btn2LedsSetup();
}

void loop() {
  btn2LedsLoop();
}