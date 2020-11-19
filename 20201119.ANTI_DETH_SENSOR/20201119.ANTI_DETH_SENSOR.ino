int sensor = 0;
void setup() {
  Serial.begin(9600); 
  pinMode(1,INPUT);
  Serial.println(sensor);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  
}

void loop() {
  sensor = analogRead(A1);
  Serial.println(sensor);

  if( sensor <=870)
  {
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    noTone(6);
  }
  if( sensor >870)
  {
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    //tone(6,700);
    delay(500);
    noTone(6);
    delay(500);
  }
}
