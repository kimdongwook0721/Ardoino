int frame = 0;
void setup() {
  pinMode(A5,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  frame = analogRead(A5);
  Serial.println(frame);

  if ( frame>1000)
  {
    tone(6,659);
    delay(500);
    noTone(6);
    delay(500);
  }
}
