int echopin = 4;
int trigpin = 5;
float Time,distance;
 
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}



void loop() 
{
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);

  Time = pulseIn(echopin,HIGH);

  distance = ((float)(390*Time) /10000) /2;

  Serial.println(distance);
  Serial.print("cn");
  if( distance <= 15 )
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(10000);
  }
  if( distance > 15 )
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
}
