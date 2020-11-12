int Buzzer = 6;
void setup() {
  Serial.begin(9600);
  pinMode(Buzzer,OUTPUT);
  
}

void loop() {
  if (Serial.available())
   {
    char input = Serial.read();
    if(input == "1")
    {
      Serial.print("이 입력되었습니다");  //
    }
   
    if(input == '1')
    {
      tone(Buzzer,130);
      delay(1000);
      noTone(Buzzer);
    }
    if(input == '2')
    {
      tone(Buzzer,146);
      delay(1000);
      noTone(Buzzer);
    
      
    }
    if(input == '3')
    {
      tone(Buzzer,164);
      delay(1000);
      noTone(Buzzer);
    }
    if(input == '4')
    {
      tone(Buzzer,174);
      delay(1000);
      noTone(Buzzer);
    }
    if(input == '5')
    {
      tone(Buzzer,195);
      delay(1000);
      noTone(Buzzer);
    }
    if(input == '6')
    {
      tone(Buzzer,220);
      delay(1000);
      noTone(Buzzer);
    }
    if(input == '7')
    {
      tone(Buzzer,246);
      delay(1000);
      noTone(Buzzer);
    }
    if(input == '8')
    {
      tone(Buzzer,261);
      delay(1000);
      noTone(Buzzer);
    }

}
}
