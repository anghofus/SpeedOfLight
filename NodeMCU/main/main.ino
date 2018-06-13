#include <ESP8266WiFi.h>

WiFiServer server(80);
String header;
  
void setup() {
  initLed();
  initDisplay();
  delay(300);
  ledBlink(1000);
  wifiConnect("PiOfLight", "SchnellerVerkehr");
  server.begin();
}

void loop() {
  WiFiClient client = server.available();
 
  if (client) {
    updateText("New Client.", "");
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        header += c;
        if (c == '\n') {
          if (currentLine.length() == 0) {
            
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();
            
            break;
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
