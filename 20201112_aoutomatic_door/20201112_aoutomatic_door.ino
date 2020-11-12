#include <Servo.h>
Servo servo;
if (Serial.available())
   {char input = Serial.read();
    if(input == '1')
   
    {
      Serial.print("이 입력되었습니다"); 
    }                    
    if(input == '1')
    {

int echopin = 4;
int trigpin = 5;
float Time,distance;
servo.attach(3);
Serial.begin(9600);
 
void setup() {
  if(distance <= 30)
   {
    servo.write(180);
   }
   if(distance > 30)
   {
    servo.write(0);
   }
   }
   
}  
}
