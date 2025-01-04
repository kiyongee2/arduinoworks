int button = 5;

//플로팅 상태 - 디지털핀을 입력으로 설정하면 전압이 HIGH, LOW를 왔다갔다하는 상태
//회로도 - 저항이 전원에 연결되면 풀업, GND에 연결되면 풀다운
void setup() {
  pinMode(button, INPUT);  
  Serial.begin(9600);

}

void loop() {
  //버튼을 누르면 0, 누르지 않으면 1
  int value = digitalRead(button); 
  Serial.println(value);
  delay(1000);
}
