#include <WiFi.h>
#include "ThingSpeak.h"
#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22
#define LEDPIN 2

const char* ssid = "Wokwi-GUEST";
const char* password = "";

unsigned long channelID = 3397885;
const char* writeAPIKey = "9CFODG39OENOG757";

WiFiClient client;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  pinMode(LEDPIN, OUTPUT);
  dht.begin();

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");

  ThingSpeak.begin(client);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Failed to read from DHT sensor");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" C  Humidity: ");
  Serial.print(hum);
  Serial.println(" %");

  if (temp > 30) {
    digitalWrite(LEDPIN, HIGH);
  } else {
    digitalWrite(LEDPIN, LOW);
  }

  ThingSpeak.setField(1, temp);
  ThingSpeak.setField(2, hum);
  ThingSpeak.setField(3, digitalRead(LEDPIN));

  int x = ThingSpeak.writeFields(channelID, writeAPIKey);
  Serial.print("ThingSpeak response: ");
  Serial.println(x);

  delay(20000);
}
