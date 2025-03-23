#include <Adafruit_NeoPixel.h>

#define PIN 7

Adafruit_NeoPixel ls = Adafruit_NeoPixel(24, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ls.begin();
  ls.setBrightness(255);
  ls.show();
}

void loop() {
  // colorWipe(ls.Color(255, 0, 0), 50);
  // colorWipe(ls.Color(0, 255, 0), 50);
  // colorWipe(ls.Color(0, 0, 255), 50);

  breathe(10, 255, 255, 255);
}

void colorWipe(uint32_t c, uint8_t wait) {
  for (uint16_t i = 0; i < ls.numPixels(); i++) {
    ls.setPixelColor(i, c);
    ls.show();
    delay(wait);
  }
}

void breathe(int pause, byte R, byte G, byte B) {
  int tmpR, tmpG, tmpB;
  int numPx = 24;
  int steps = 255;

  //FADE IN
  for (int s = 1; s <= steps; s++) {
    tmpR = (R * s) / steps;
    tmpG = (G * s) / steps;
    tmpB = (B * s) / steps;

    for (int i = 0; i < numPx; i++) {
      ls.setPixelColor(i, tmpR, tmpG, tmpB);
    }
    ls.show();
    delay(pause);
  }

  //FADE OUT
  for (int s = steps; s > 0; s--) {
    tmpR = (R * s) / steps;
    tmpG = (G * s) / steps;
    tmpB = (B * s) / steps;

    for (int i = 0; i < numPx; i++) {
      ls.setPixelColor(i, tmpR, tmpG, tmpB);
    }
    ls.show();
    delay(pause);
  }
  delay(pause * 5);
}
