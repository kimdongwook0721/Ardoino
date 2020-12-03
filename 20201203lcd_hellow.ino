#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();    //lcd 초기화  
  lcd.backlight();
  lcd.setCursor(0,0);      
  lcd.print("hellow^_");
  lcd.setCursor(0,1);
  lcd.print("coding_Lab");
}

void loop() {
  

}
