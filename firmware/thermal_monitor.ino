#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
float temperature;

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  temperature = dht.readTemperature();

  if (temperature > 25) {
    Serial.println("Alert: Temperature too high for tomato storage!");
  }

  Serial.print("Current Temperature: ");
  Serial.println(temperature);

  delay(2000);
}
