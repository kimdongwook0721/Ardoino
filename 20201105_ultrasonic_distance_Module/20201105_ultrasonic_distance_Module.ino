int echopin = 4;
int trigpin = 5;
float Time,distance;
 
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);

  Time = pulseIn(echopin,HIGH);

  distance = ((float)(390*Time) /10000) /2;

  Serial.println(distance);
  Serial.print("cn");
  if(distance <= 30 && distance >= 15)
  {
    tone(6,440);
    delay(500);
    noTone(6);
    delay(500);
  }
  if(distance <= 15 && distance >= 5)
  {
    tone(6,440);
    delay(250);
    noTone(6);
    delay(250);   
  }
  if(distance <= 5&& distance >= 0)
  {
    tone(6,440);
    delay(100);
    noTone(6);
    delay(100);
  }
  
}
