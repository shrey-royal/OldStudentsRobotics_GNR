/*
Components Used:
  1. LED x5

Pins Details:
1. LED 1:
+ve -> 3
-ve -> GND

2. LED 2:
+ve -> 5
-ve -> GND

3. LED 3:
+ve -> 6
-ve -> GND

4. LED 4:
+ve -> 9
-ve -> GND

5. LED 5:
+ve -> 10
-ve -> GND
*/
int randomLed = 0;

void fadeSetup2(int l[], int n) {
  for(int i=0; i<n; i++) {
    pinMode(l[i], OUTPUT);
    analogWrite(l[i], LOW);
  }
}

void fadeLoop2(int l[], int n) {
  randomSeed(analogRead(0));

  randomLed = random(5);
  for(int i=0; i<256; i+=5) {
    analogWrite(l[randomLed], i);
    delay(30);
  }
  delay(1000);
  for(int i=255; i>=0; i-=5) {
    analogWrite(l[randomLed], i);
    delay(30);
  }
  delay(1000);
}






