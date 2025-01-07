const int activeB = 10;
const int btn = 4;

void setup() {
  pinMode(activeB, OUTPUT);
  pinMode(btn, INPUT);
  Serial.begin(115200);
}

void loop() {
  int btnState = digitalRead(btn);
  Serial.println(btnState);
  analogWrite(activeB, btnState);

}
