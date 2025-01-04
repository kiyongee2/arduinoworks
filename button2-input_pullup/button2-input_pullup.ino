int bt1 = 4;
int bt2 = 5;

//회로도 - 저항을 사용하지 않음
//풀업 저항(INPUT_PULLUP 명령어 사용)
void setup() {
  pinMode(bt1, INPUT_PULLUP);  
  pinMode(bt2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //버튼을 누르면 0, 누르지 않으면 1
  int val1 = digitalRead(bt1); 
  int val2 = digitalRead(bt2);
  
  if(val1 == 0){
    Serial.println("bt1 is pressed!!");
    delay(400);
  }
  if(val2 == 0){
    Serial.println("bt2 is pressed!!");
    delay(400);
  }
}
