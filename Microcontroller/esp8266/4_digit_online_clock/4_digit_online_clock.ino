#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <TM1637Display.h>

#define CLK D2
#define DIO D3

TM1637Display display(CLK, DIO);

const char *ssid     = "Arkadip";
const char *password = "123456@#";

// India UTC +5:30
const long utcOffsetInSeconds = 19800;

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

void setup() {
  Serial.begin(115200);

  display.setBrightness(7);
  display.clear();

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected");

  timeClient.begin();
  timeClient.update();   // initial sync
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    WiFi.reconnect();
    return;
  }

  timeClient.update();

  int timeHM = timeClient.getHours() * 100 + timeClient.getMinutes();
  int seconds = timeClient.getSeconds();

  // Blink colon every second
  if (seconds % 2 == 0) {
    display.showNumberDecEx(timeHM, 0b01000000, true);
  } else {
    display.showNumberDecEx(timeHM, 0b00000000, true);
  }
}
