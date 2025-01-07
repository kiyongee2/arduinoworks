const int activeB = 10;

void setup() {
  pinMode(activeB, OUTPUT);

  // 처음 3초간 소리 재생
  analogWrite(activeB, 100);
  delay(3000);
  analogWrite(activeB, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
