int led =0; // int = 정수
//char a = '가';  / char= 문자열
// led 
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
  Serial.println("Hello");  // print, println (엔터기능)
  delay(500);
}
