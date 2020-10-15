void setup() {
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  Serial.print(digitalRead(8));
  delay(500);
}
