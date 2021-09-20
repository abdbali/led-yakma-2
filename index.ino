int LEDcikis=13;
void setup() 
{
pinMode(LEDcikis,OUTPUT);
}
void loop() 
{
 digitalWrite(LEDcikis,HIGH);
 delay(1000);
 digitalWrite(LEDcikis,LOW);
 delay(1000);
}