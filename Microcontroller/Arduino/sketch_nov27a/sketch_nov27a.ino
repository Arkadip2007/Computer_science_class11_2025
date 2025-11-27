const int totalLEDs = 7;
int ledPins[7] = { 7, 8, 9, 10, 11, 12, 13 };

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