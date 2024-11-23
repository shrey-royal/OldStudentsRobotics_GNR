// 1_Blink Declarations
// int led = 9;

// 2_Multiple_LEDs Declaration
int l[] = {3, 5, 6, 9, 10};
int size = sizeof(l)/sizeof(l[0]);

void setup() {
  fadeSetup2(l, size);
}

void loop() {
  fadeLoop2(l, size);
}