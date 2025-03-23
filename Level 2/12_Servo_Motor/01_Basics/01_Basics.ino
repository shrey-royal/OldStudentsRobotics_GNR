#include <Servo.h>

Servo sm;

void setup() {
  sm.attach(9);
}

void loop() {
  int i;
  for (i = 0; i < 180; i++) {
    sm.write(i);
    delay(10);
  }
  delay(1000);
  for (; i >= 0; i--) {
    sm.write(i);
    delay(10);
  }
  delay(1000);
}
