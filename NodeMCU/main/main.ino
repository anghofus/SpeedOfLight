#include <ESP8266WiFi.h>

WiFiServer server(80);
WiFiClient client;
String header;
String output;

void setup() {
  pinMode(D5, OUTPUT);
  digitalWrite(D5, LOW);
  initLed();
  ledBlink(50);
  initDisplay();
  wifiConnect("PiOfLight", "SchnellerVerkehr");
  server.begin();
}

void loop() {
  client = server.available();
  if (client) {
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        header += c;
        if (c == '\n') {
          if (currentLine.length() == 0) {
            output = readFromHeader(header);
            executeCase(output);

            client.println("HTTP/1.1 204 Zoomkat");
            client.println();
            client.println();
            delay(1);

            break;
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }
      }
    }
    client.stop();
    header = "";
 }
 delay(100);
}
