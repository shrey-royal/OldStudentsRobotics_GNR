int led = 13;
int btnPin = 7;
int lastState = HIGH;
int currState;

void setup() {
  btnLedSetup();
}

void loop() {
  btnLedLoop();
}