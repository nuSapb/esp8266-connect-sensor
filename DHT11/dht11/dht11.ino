#include "DHT.h"
#define DHTTYPE DHT11   // DHT 11
const int DHTPin = 5;

DHT dht(DHTPin, DHTTYPE);


void setup(){
  Serial.begin(9600);
}

void loop()
{

  Serial.print("Temperature = ");
  Serial.println(dht.readTemperature());
  Serial.print("Humidity = ");
  Serial.println(dht.readHumidity());
  delay(1000);
}
