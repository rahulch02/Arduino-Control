#include<Wire.h>
// C++ code
//

void setup()
{
  for(int i=2;i<=13;i++){
    pinMode(i, OUTPUT);
  }
  Wire.begin(8);
  Wire.onReceive(receiver);
}

int speed = -1;

void loop()
{
  if(speed == -1)
    delay(1);
  
  int pin = 2, m = 1;
  
  do{
    if(pin == 14){
      pin = 12;
      m=-1;
      continue;
    }
    
    digitalWrite(pin, HIGH);
    
    delay(speed);
    
    digitalWrite(pin, LOW);
    
    pin += m;
    
  }while(pin != 2);
}

void receiver(int numBytes) {
  int c = 0;
  int ct = 1;
  while(Wire.available()){
    c += ct*(Wire.read()-'0');
    ct *= 10;
  }
  speed = c;
}