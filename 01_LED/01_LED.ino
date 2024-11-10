// 1_Blink Declarations
// int led = 9;

// 2_Multiple_LEDs Declaration
int red = 12;
int blue = 11;

void setup() {
  // blinkSetup(led);
  multipleLedSetup(red, blue);
}

void loop() {
  // blinkLoop(led);
  multipleLedLoop(red, blue);
}