const int totalLEDs = 13;
int ledPins[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0 };

void setup() {
  for (int i = 0; i < totalLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}
void loop() {
  for (int i = 0; i < totalLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}