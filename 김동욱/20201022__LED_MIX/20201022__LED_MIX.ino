

int REDLED = 9;
int GREENLED = 10;
int BLUELED = 11;

void setup() {
  Serial.begin(9600);  // 시리얼 모니터 on
  pinMode(REDLED,OUTPUT);
  pinMode(GREENLED,OUTPUT);
  pinMode(BLUELED,OUTPUT);

}
void loop() 
{
  if(Serial.available()>0);  // 시리얼 모니터에서 입력받으면
  {
    char input = Serial.read ();
    if(input == '1')
    {
      Serial.println("희색불이 켜졌습니다");
      digitalWrite(REDLED,HIGH);
      digitalWrite(GREENLED,HIGH);
      digitalWrite(BLUELED,HIGH);
    }
    else if(input == '2') //
    {
      Serial.println("마젠타색이 켜졌습니다");
      digitalWrite(REDLED,HIGH);
      digitalWrite(GREENLED,LOW);
      digitalWrite(BLUELED,HIGH);
    }
    
    else if(input == '3') //초록불
    {
      Serial.println("CYAN이 켜졌습니다");
      digitalWrite(BLUELED,HIGH);
      digitalWrite(REDLED,LOW);
      digitalWrite(GREENLED,HIGH);
    }
    else if(input == '4') //OFF 
    {
      Serial.println("노랑불이 켜졌습니다");
      digitalWrite(BLUELED,LOW);
      digitalWrite(REDLED,HIGH);
      digitalWrite(GREENLED,HIGH);
    }
  else if(input == '5') //OFF 
    {
      Serial.println("노랑불이 켜졌습니다");
      digitalWrite(BLUELED,LOW);
      digitalWrite(REDLED,LOW);
      digitalWrite(GREENLED,LOW);
    }
  }
}   
