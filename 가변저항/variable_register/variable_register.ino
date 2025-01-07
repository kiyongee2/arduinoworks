const int varR = A1;
const int led = 9;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  int value = analogRead(varR);
  Serial.println(value);
  delay(300);

  // 가변저항: 0 ~ 1023, LED: 0 ~ 255
  analogWrite(led, value/4);
}
