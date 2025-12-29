#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Custom characters
byte heart[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

byte battery[8] = {
  B01110,
  B10101,
  B10101,
  B10101,
  B10101,
  B10101,
  B11111,
  B11111
};

byte wifi[8] =   {
  B00000,
  B00100,
  B01010,
  B10001,
  B00100,
  B11111,
  B01110,
  B00100
};

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.createChar(0, heart);
  lcd.createChar(1, battery);
  lcd.createChar(2, wifi);

  lcd.setCursor(0, 0);
  lcd.print("Icons:");

  lcd.setCursor(0, 1);
  lcd.write(0); // heart
  lcd.print(" ");
  lcd.write(1); // battery
  lcd.print(" ");
  lcd.write(2); // wifi
}

void loop() {
}
