//test analog pin
//contral brightness
int led = 9;  //dont use A(01234567) pins because this's pin only --> analog read and digital out
void setup()
{
  pinMode(led,OUTPUT);
}
void loop()
{
  analogWrite(led,255); // D9 
}