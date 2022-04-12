#include<Wire.h>

// C++ code
//
void setup()
{
  Wire.begin();
}

int prev = -1;

void loop()
{
  int buffer = map(analogRead(A1), 0, 1023, 1, 1000);
  if(buffer != prev){
    prev = buffer;
    Wire.beginTransmission(8);
    while(buffer){
      Wire.write(buffer%10+'0');
      buffer/=10;
    }
    //Serial.println(map(analogRead(A1), 0, 1023, 1, 1000));
    Wire.endTransmission();
  }
}