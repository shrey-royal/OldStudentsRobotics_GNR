// 1_Blink Declarations
int led = 9;

// 2_Multiple_LEDs Declaration
// int l[] = {12, 11, 10, 9, 8};
// int size = sizeof(l)/sizeof(l[0]);

void setup() {
  fadeSetup(led);
}

void loop() {
  fadeLoop(led);
}