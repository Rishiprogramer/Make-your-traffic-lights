int red = 8;
int yellow = 7;
int green = 9;
void setup() 
{
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
}
void loop() 
{
  digitalWrite(red, HIGH);
  delay(1000);

  digitalWrite(red, LOW);
  delay(100);

  digitalWrite(yellow, HIGH);
  delay(900);

  digitalWrite(yellow,LOW);
  delay(100);

  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(100);
  digitalWrite(yellow, HIGH);
  delay(900);

  digitalWrite(yellow,LOW);
  delay(100);

  digitalWrite(red, HIGH);
  delay(1000);

  digitalWrite(red, LOW);
  delay(1);
  
  
  
}
