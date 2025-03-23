#include <Servo.h>

Servo sm;
int led = 11;

void setup() {
  sm.attach(9);
  pinMode(led, OUTPUT);
}

void loop() {
  int i;
  for (i = 0; i < 180; i++) {
    analogWrite(led, map(i, 0, 180, 0, 255));
    sm.write(i);
    delay(10);
  }
  delay(1000);
  for (; i >= 0; i--) {
    analogWrite(led, map(i, 0, 180, 0, 255));
    sm.write(i);
    delay(10);
  }
  delay(1000);
}
