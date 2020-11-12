int score = 0;


void setup() {
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   Serial.begin(9600);

}

void loop() {
  score = analogRead(A1);
  Serial.println(score);
   if( score < 300)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
   else if( score < 500)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH); 
    digitalWrite(11,LOW);
  }
   else if( score < 700)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH); 
  }
   else if( score < 900)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH); 
    digitalWrite(11,LOW);
  }
   else if( score > 900)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH); 
    digitalWrite(11,HIGH);
  }
  

  






  

}
