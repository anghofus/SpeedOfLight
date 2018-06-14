int randomNum = 0;
int randomInterval = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  randomNum = random(1,4);
  randomInterval = random(250, 1000);
  digitalWrite(randomNum, LOW);
  delay(randomInterval);
  digitalWrite(randomNum, HIGH);
  delay(100);
}
