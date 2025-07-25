// C++ code
//
int redled = A0;
int blink = 1000;
void setup()
{
  pinMode(redled, OUTPUT);
}

void loop()
{
  digitalWrite(redled, 100);
  delay(blink); // Wait for 1000 millisecond(s)
  digitalWrite(redled, LOW);
  delay(blink); // Wait for 1000 millisecond(s)
}