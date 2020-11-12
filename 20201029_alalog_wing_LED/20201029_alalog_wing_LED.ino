int pot = 0;  
int led = 13;

void setup() 
{  
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pot = analogRead(A0);
  Serial.println(pot);

  if(pot >=500)
  {
   digitalWrite(led,HIGH);
  }
  else
  {
   digitalWrite(led,LOW);
  }
}
