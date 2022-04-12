// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(0, INPUT);
}

void loop()
{
  int potValue = analogRead(1);
  
  int brightness = map(potValue, 0, 1023, 0, 5);
  
  digitalWrite(13, brightness);
  
  delay(1000);
  
  digitalWrite(13, LOW);
}