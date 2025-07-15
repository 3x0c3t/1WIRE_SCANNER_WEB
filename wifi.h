#ifndef WIFI_H
#define WIFI_H

#include <ESP8266WiFi.h>

const char* ssid = "N0wifiHere";
const char* password = "@PassWeurd";
const char* ap_name = "3x0c3t-1WIRE";
const unsigned long wifiTimeout = 10000;

void connectToWiFi() {
  WiFi.begin(ssid, password);
  Serial.print("Connexion à ");
  Serial.println(ssid);

  unsigned long startAttemptTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - startAttemptTime < wifiTimeout) {
    delay(500);
    Serial.print(".");
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nConnecté au WiFi !");
  } else {
    Serial.println("\nÉchec WiFi. Démarrage en mode AP...");
    WiFi.softAP(ap_name);
    Serial.print("IP AP : ");
    Serial.println(WiFi.softAPIP());
  }
}

#endif
