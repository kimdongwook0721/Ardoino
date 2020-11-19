int pot = 0;
void setup() {
  pinMode(6,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  //pot = analogRead(A0);
  Serial.println(pot);
  tone(6,pot);
    



}
