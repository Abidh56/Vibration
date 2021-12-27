
int vib = 3;
int led = 5;
int buzzer = 6;
int vibration;

void setup() {

  pinMode(vib, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  delay (50);
}

void loop() {

  vibration = digitalRead(vib);
  if (vibration == 1) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1000);

  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }
  delay(100);
}
