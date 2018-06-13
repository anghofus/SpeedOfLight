#include <ESP8266WiFi.h>

void wifiConnect(String ssid, String password) {
  IPAddress ip(192,168,4,200);
  IPAddress gateway(192,168,4,1);   
  IPAddress subnet(255,255,255,0);
  
  WiFi.config(ip, gateway, subnet);
  WiFi.begin(ssid.c_str(), password.c_str());
  
  setText("CONNECTING...", "");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  
  updateText("CONNECTED!", WiFi.localIP().toString());
}
