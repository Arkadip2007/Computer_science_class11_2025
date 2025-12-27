#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// 5x8 pixel map
byte onePixel[8] = {
  B00001,
  B00011,
  B00111,  // <-- middle pixel ON
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.createChar(0, onePixel); // custom char stored at location 0
  lcd.setCursor(5, 0);         // position on LCD
  lcd.write(0);                // display custom char
}

void loop() {
}
