#include <Servo.h>
Servo servo;
int echopin = 4;
int trigpin = 5;
float Time,distance;
 
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  servo.attach(3);
  Serial.begin(9600);
  
   
}

void loop() {
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);

  Time = pulseIn(echopin,HIGH);

  distance = ((float)(390*Time) /10000) /2;

  Serial.println(distance);
  Serial.print("cn");
  if(distance <= 30)
  {
    servo.write(180);
  }
  if(distance >30 )
  {
    servo.write(0);
  }
  
}
