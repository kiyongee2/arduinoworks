const int VR = A0;
const int led = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(VR, INPUT);
}

void loop() {
  // 가변 저항을 돌리면 led의 밝기 변경
  int value = analogRead(VR);
  int lightVal = value / 4;
  analogWrite(led, lightVal);
}
