void setup() {
  initLed();
  initDisplay();
  delay(300);
  
  wifiConnect("PiOfLight", "SchnellerVerkehr");
}

void loop() {
  ledBlink(0, 500);
  delay(300);
}
