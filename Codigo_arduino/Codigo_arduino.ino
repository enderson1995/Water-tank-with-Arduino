#include <ArduinoJson.h>


int cont=0;

void setup() {
  // put your setup code here, to run once:
  // code prube conection with mango automation
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(" Contador: ");
  Serial.print(cont);
  Serial.write("hola");

  cont++;
  delay(1000);
}
