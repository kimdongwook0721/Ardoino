#include <Servo.h>
Servo servo;


void setup() {
  servo.attach(3);
  Serial.begin(9600);
  
 
}

void loop() {
   if (Serial.available())
   {char input = Serial.read();
    if(input == '1')
   
    {
      Serial.print("이 입력되었습니다"); 
    }                    
    if(input == '1')
    {
      servo.write(0);         
    }
    if(input == '2')
    {
      servo.write(120);      
    }
    if(input == '3')
    {
      servo.write(180);         
    }
}}
