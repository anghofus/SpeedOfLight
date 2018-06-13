void initLed() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void ledBlink(int ledNr, int time) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(time);
    digitalWrite(LED_BUILTIN, HIGH);
}
