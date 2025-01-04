void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  analogWrite(9, 150);
  delay(500);
  analogWrite(9, 0);
  delay(500);
}
