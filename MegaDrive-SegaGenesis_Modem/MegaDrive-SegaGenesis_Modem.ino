#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

const char *ssid = "your ssid";// "insert your ssid"
const char *password = "your ssid password"; // "put your password ssid"
const char *url = "https://time.is";
const int intervaloAtualizacao = 5000;

void setup() {
  Serial.begin(1200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  Serial.println("Connected.");
}

void loop() {
  HTTPClient http;
  http.begin(url);
  int httpCode = http.GET();

  if (httpCode == HTTP_CODE_OK) {
    String payload = http.getString();

    // Find begin & end of the message in html doc
    int startIndex = payload.indexOf("<span id=\"favt6\">") + 17;
    int endIndex = payload.indexOf("</span>", startIndex);

    // get the message
    String message = payload.substring(startIndex, endIndex);

    // Print on serial port and send to Mega Drive
    Serial.println("New York City hour: " + message);
  } else {
    Serial.println("Communication HTTP failed.");
  }

  http.end();
  delay(intervaloAtualizacao);
}

