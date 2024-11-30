// 1_Blink Declarations
// int led = 9;

// 2_Multiple_LEDs Declaration
// int l[] = {3, 5, 6, 9, 10};
// int size = sizeof(l)/sizeof(l[0]);

// 4_RGB declarations
int rv = 255, r = 9;
int gv = 255, g = 10;
int bv = 255, b = 11;
String str = "";

void setup() {
  rgbSetup(r, g, b);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    rv = Serial.parseInt();
    gv = Serial.parseInt();
    bv = Serial.parseInt();
    rgbLoop(r, g, b, rv, gv, bv);
  }
}