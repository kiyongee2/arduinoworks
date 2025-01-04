const int led = 6;
const int btn = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int btnState = digitalRead(btn);
  digitalWrite(led, btnState);
}
