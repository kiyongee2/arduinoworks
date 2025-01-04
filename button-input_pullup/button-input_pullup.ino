int button = 5;

//회로도 - 저항을 사용하지 않음
//풀업 저항(INPUT_PULLUP 명령어 사용)
void setup() {
  pinMode(button, INPUT_PULLUP);  
  Serial.begin(9600);

}

void loop() {
  //버튼을 누르면 0, 누르지 않으면 1
  int value = digitalRead(button); 
  Serial.println(value);
  delay(1000);
}
