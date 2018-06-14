#include <ESP8266WiFi.h>

WiFiServer server(80);
WiFiClient client;
String header;
String output;

void setup() {
  initLed();
  initDisplay();
  delay(300);
  ledBlink(1000);
  wifiConnect("PiOfLight", "SchnellerVerkehr");
  delay(2000);
  server.begin();
}

void loop() {
  client = server.available();
  if (client) {
    updateText("New Client.", "");
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

          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }
      }
    }
    header = "";
    client.stop();
 }
}
