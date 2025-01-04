const int led = 6;
const int btn = 2;
int ledState = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int btnState = digitalRead(btn);
  // 버튼을 누르면 1 - 풀다운 저항
  if(btnState == 1){
    ledState = !ledState;
    digitalWrite(led, ledState);
    delay(300);
  }
}
