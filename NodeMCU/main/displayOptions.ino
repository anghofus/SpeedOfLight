#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void initDisplay(){
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
}

void clearText(){
  lcd.clear();
}

void setText(String lineOne, String lineTwo) {
  lcd.setCursor(0, 0);
  lcd.print(lineOne);
  lcd.setCursor(0, 1);      
  lcd.print(lineTwo);
}

void updateText(String lineOne, String lineTwo) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(lineOne);
  lcd.setCursor(0, 1);      
  lcd.print(lineTwo);
}
