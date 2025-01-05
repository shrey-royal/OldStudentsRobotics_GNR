int trigPin = 9;
int echoPin = 8;

int l1=3, l2=4, l3=5;
int buzzer = 7;

float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration_us = pulseIn(echoPin, HIGH);
  distance_cm = 0.017 * duration_us;

  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  if(distance_cm >= 25) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    noTone(buzzer);
  } else if(distance_cm >= 20 && distance_cm < 25) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    tone(buzzer, 1000);
  } else if(distance_cm >= 10 && distance_cm < 20) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    tone(buzzer, 2500);
  } else if(distance_cm >= 0 && distance_cm < 10) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    tone(buzzer, 4000);
  }

  delay(500);
}
