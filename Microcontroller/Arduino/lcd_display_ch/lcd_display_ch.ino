#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Most common I2C address = 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        // initialize LCD
  lcd.backlight();   // turn on backlight

  lcd.setCursor(0, 0);
  lcd.print("Hello !");

  lcd.setCursor(0, 1);
  lcd.print("its arkadip");
}

void loop() {
  // nothing to do
}
