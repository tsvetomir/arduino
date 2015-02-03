/*
  Mirrors an input signal with the LED
 */

// the setup routine runs once when you press reset:
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

int val = 0;

// the loop routine runs over and over again forever:
void loop() {
  int val = digitalRead(2);
  if (val > 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
