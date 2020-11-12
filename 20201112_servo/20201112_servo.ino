#include <Servo.h>
Servo servo;


void setup() {
  servo.attach(3);
  
  
 
}

void loop() {
  servo.write(0);
  delay(1000);
  
  delay(1000);

}
