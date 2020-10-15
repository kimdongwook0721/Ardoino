void setup() 
{ pinMode(13,OUTPUT);  //output 출력

} 

void loop() 
{  
 digitalWrite(13,HIGH);     //   high - 1 Low -0
 delay(1000);
 digitalWrite(13,LOW);
 delay(1000);
}
