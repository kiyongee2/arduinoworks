const int speakPin = 10;
void setup() {
  pinMode(speakPin, OUTPUT);
}

void loop() {
  //0.5초 간격으로 재생
  analogWrite(speakPin, 150);
  delay(500);
  analogWrite(speakPin, 0);
  delay(500);
}
