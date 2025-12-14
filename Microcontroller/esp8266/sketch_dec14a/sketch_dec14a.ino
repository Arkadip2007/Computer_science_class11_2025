#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// WiFi Access Point details
const char* ssid = "ESP8266_LED_Control";
const char* password = "12345678";

// SAFE GPIO pins (NO BOOT ISSUES)
#define LED1 D1   // GPIO5
#define LED2 D2   // GPIO4
#define LED3 D5   // GPIO14
#define LED4 D6   // GPIO12

ESP8266WebServer server(80);

// -------------------- SETUP --------------------
void setup() {
  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  // Turn OFF all LEDs initially
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);

  // Start Access Point
  WiFi.softAP(ssid, password);
  Serial.println();
  Serial.print("AP IP Address: ");
  Serial.println(WiFi.softAPIP());

  // Web routes
  server.on("/", handleRoot);

  server.on("/LED1_ON",  [](){ digitalWrite(LED1, HIGH); redirect(); });
  server.on("/LED1_OFF", [](){ digitalWrite(LED1, LOW);  redirect(); });

  server.on("/LED2_ON",  [](){ digitalWrite(LED2, HIGH); redirect(); });
  server.on("/LED2_OFF", [](){ digitalWrite(LED2, LOW);  redirect(); });

  server.on("/LED3_ON",  [](){ digitalWrite(LED3, HIGH); redirect(); });
  server.on("/LED3_OFF", [](){ digitalWrite(LED3, LOW);  redirect(); });

  server.on("/LED4_ON",  [](){ digitalWrite(LED4, HIGH); redirect(); });
  server.on("/LED4_OFF", [](){ digitalWrite(LED4, LOW);  redirect(); });

  server.begin();
  Serial.println("HTTP server started");
}

// -------------------- LOOP --------------------
void loop() {
  server.handleClient();
}

// -------------------- FUNCTIONS --------------------
void redirect() {
  server.sendHeader("Location", "/");
  server.send(303);
}

void handleRoot() {
  String html =
    "<!DOCTYPE html><html><head>"
    "<meta name='viewport' content='width=device-width, initial-scale=1'>"
    "<style>"
    "body{text-align:center;font-family:Arial;}"
    "button{padding:15px 25px;font-size:18px;margin:8px;border:none;color:white;}"
    ".on{background:#4CAF50;}"
    ".off{background:#f44336;}"
    "</style></head><body>"

    "<h2>ESP8266 LED Controller</h2>"

    "<p>LED 1</p>"
    "<a href='/LED1_ON'><button class='on'>ON</button></a>"
    "<a href='/LED1_OFF'><button class='off'>OFF</button></a>"

    "<p>LED 2</p>"
    "<a href='/LED2_ON'><button class='on'>ON</button></a>"
    "<a href='/LED2_OFF'><button class='off'>OFF</button></a>"

    "<p>LED 3</p>"
    "<a href='/LED3_ON'><button class='on'>ON</button></a>"
    "<a href='/LED3_OFF'><button class='off'>OFF</button></a>"

    "<p>LED 4</p>"
    "<a href='/LED4_ON'><button class='on'>ON</button></a>"
    "<a href='/LED4_OFF'><button class='off'>OFF</button></a>"

    "</body></html>";

  server.send(200, "text/html", html);
}
