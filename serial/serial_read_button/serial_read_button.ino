// const int led = 6;
const int button = 5;

void setup() {
  Serial.begin(115200);
  // pinMode(led, OUTPUT);
}

void loop() {
  int value = digitalRead(button);
  Serial.println(value);
  delay(500);
}
