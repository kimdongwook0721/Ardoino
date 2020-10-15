void setup() {
  pinMode(9,OUTPUT);         //빨강
  pinMode(10,OUTPUT);          //초록
  pinMode(11,OUTPUT);           //파랑

}

void loop() {
 
 digitalWrite(9,HIGH);
 delay(5000);
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 delay(5000);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 delay(1000);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 
 
 

 
 
  
 
 
 

}
