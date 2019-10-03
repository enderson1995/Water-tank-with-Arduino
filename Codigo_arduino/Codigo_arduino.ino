#include <ArduinoJson.h>
//#include <Ethernet.h>
//#include <SPI.h>

//int cont=0;

void setup() {
  // put your setup code here, to run once:
  // code prube conection with mango automation
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //const int capacity = JSON_OBJECT_SIZE(1);
  //StaticJsonDocument<capacity> doc;
  //doc["/test"] = cont;
  //serializeJson(doc, Serial);

  //// http conect

  //EthernetClient client;
  //client.connect("localhost:8080/ui/httpds?test=", 80);
  //client.println(measureJson(doc));
  //client.println();
  //serializeJson(doc, client);
  Serial.write("1235end");
  delay(2000);
  Serial.println("");
  Serial.write("4321end");
  delay(2000);
  Serial.println("");
  //const size_t capacity = JSON_OBJECT_SIZE(1);
  //DynamicJsonDocument doc(capacity);

  //doc["peso"] = 123123.132;

  //serializeJson(doc, Serial);
}
