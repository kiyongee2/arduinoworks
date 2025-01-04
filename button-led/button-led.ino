int button = 4;
int led = 6;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

//버튼을 누르면 LED가 켜지고, 누르지 않으면 꺼짐
void loop() {
  int value = digitalRead(button);
  digitalWrite(led, !value);
}
