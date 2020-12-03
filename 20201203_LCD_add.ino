#include <LiquidCrystal_I2C.h>

int a = 0;

LiquidCrystal_I2C lcd(0x27,16,2);    

void setup() {
 
  pinMode(a,OUTPUT);
  lcd.init();    //lcd 초기화  
  lcd.backlight();
  Serial.begin(9600);
  
}

void loop() {
  for(a=0;a<16;a++)
  {
   lcd.setCursor(a,0);
   lcd.print("this is");
   lcd.setCursor(a+6,0);
   lcd.print("carry");
   lcd.setCursor(a,1);
   lcd.print("i am");
   lcd.setCursor(a+6,1);
   lcd.print("SHOWMAKER");
  }
  
  
  
  
  
  

}
