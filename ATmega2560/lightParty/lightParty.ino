int randomNum = 0;
int randomInterval = 0;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  randomNum = random(1,4);
  randomInterval = random(250, 1000);
  digitalWrite(randomNum, LOW);
  delay(randomInterval);
  digitalWrite(randomNum, HIGH);
  delay(100);
}
