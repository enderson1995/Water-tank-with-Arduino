#include <ArduinoJson.h>
//#include <Ethernet.h>
//#include <SPI.h>

int cont=0;

void setup() {
  // put your setup code here, to run once:
  // code prube conection with mango automation
  Serial.begin(9600);

}

void loop() {
  String salida = (String) cont;
  Serial.print(salida);
  Serial.write("1235end");
  delay(1000);
  Serial.println("");
  Serial.write("4321end");
  delay(1000);
  Serial.println("");
  cont++;

}
