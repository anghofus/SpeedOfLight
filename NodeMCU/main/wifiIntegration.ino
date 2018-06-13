#include <ESP8266WiFi.h>

void wifiConnect(String ssid, String password) {
  
  WiFi.begin(ssid.c_str(), password.c_str());
  
  setText("CONNECTING...", "");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  
  updateText("CONNECTED!", WiFi.localIP().toString());
}
