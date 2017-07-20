// Arduino || modulo GPS
//   VCC   ||   VCC
//    4    ||    TX
//    3    ||    RX
//   GND   ||   GND


#include <SoftwareSerial.h>
SoftwareSerial gps(4,3);//RX,TX

char dato=' ';

void setup()
{
 Serial.begin(115200);            
 gps.begin(9600); 
}


void loop()
{
  if(gps.available())
  {
    dato=gps.read();
    Serial.print(dato);
  }
}
