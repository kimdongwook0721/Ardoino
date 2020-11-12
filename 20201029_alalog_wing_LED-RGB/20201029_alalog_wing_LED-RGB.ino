int pot = 0;  
int RED = 9;
int GREEN = 10;
int BLUE = 11;

void setup() 
{  
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pot = analogRead(A0);
  Serial.println(pot);

  if (pot <50)
  {
   digitalWrite(RED,HIGH);
   digitalWrite(GREEN,HIGH);
   digitalWrite(BLUE,HIGH);
  }
  else if (pot <500)
  {
   digitalWrite(RED,LOW);
   digitalWrite(GREEN,LOW);
   digitalWrite(BLUE,LOW);
   digitalWrite(RED,HIGH);
  } 
  else if (pot <700)
  {
   digitalWrite(RED,LOW);
   digitalWrite(BLUE,HIGH);
   digitalWrite(GREEN,LOW);
  }
  else if (pot <900)
  {
   digitalWrite(BLUE,LOW);
   digitalWrite(GREEN,HIGH);
   digitalWrite(RED,LOW);
  }
  else if (pot <1023)
  {
    digitalWrite(GREEN,LOW);
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,HIGH);
  }
}
