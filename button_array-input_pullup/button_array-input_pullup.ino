
int bt[3] = {3, 4, 5};  //버튼 배열 선언
int btVal[3];           //버튼값 배열 선언

//배열로 pinMode() 설정
void setup() {
  for(int i=0; i<3; i++){
    pinMode(bt[i], INPUT_PULLUP); 
  }
  Serial.begin(9600);
}

void loop() {
  //버튼을 누르면 0, 누르지 않으면 1
  for(int i=0; i<3; i++){
    btVal[i] = digitalRead(bt[i]); 
  }
  
  if(btVal[0] == 0){
    Serial.println("bt1 is pressed!!");
    delay(400);
  }
  if(btVal[1] == 0){
    Serial.println("bt2 is pressed!!");
    delay(400);
  }
  if(btVal[2] == 0){
    Serial.println("bt3 is pressed!!");
    delay(400);
  }
}
