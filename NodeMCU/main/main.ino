void setup() {
  initLed();
  initDisplay();
  
  delay(300);
  setText("HELLO", "WORLD");
}

void loop() {
  ledBlink(0, 500);
  delay(300);
}
