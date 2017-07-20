// Arduino || modulo GPS
//   VCC   ||   VCC
//    4    ||    TX
//    3    ||    RX
//   GND   ||   GND

/*Instruções de dados:
 * $GPRMC,044235.000,A,4322.0289,N,00824.5210,W,0.39,65.46,020615,,,A*44
 * 
 * - 044235.000 representa a hora GMT (04:42:35)
 * - “A” es la indicación de que el dato de posición está fijado y es correcto. “V” sería no válido
 * - 4322.0289 representa la longitud (43º 22.0289´)
 * - N representa el Norte
 * - 00824.5210 representa la latitud (8º 24.5210´)
 * - W representa el Oeste
 * - 0.39 representa la velocidad en nudos
 * - 65.46 representa la orientación en grados
 * - 020615 representa la fecha (2 de Junio del 2015)
 */



#include <SoftwareSerial.h>
SoftwareSerial gps(4,3);//RX,TX

char data=' ';

void setup(){
 Serial.begin(115200);            
 gps.begin(9600); 
}


void loop()
{
  if(gps.available()){
    data=gps.read();
    Serial.print(data);
  }
}
