/*
Components Used:
  1. LED

Pins Details:
1. LED:
+ve -> 9
-ve -> GND
*/

void blinkSetup(int ledPin) {
  pinMode(ledPin, OUTPUT);
}

void blinkLoop(int ledPin) {  
  digitalWrite(ledPin, 1);
  delay(200);
  
  digitalWrite(ledPin, 0);
  delay(1000);
}