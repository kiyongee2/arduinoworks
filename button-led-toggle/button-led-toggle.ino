int button = 2;
int led = 6;
int ledState = 0;  //led 상태(LOW)

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

//버튼을 누르면 LED가 계속 켜있고, 누르지 않으면 계속 꺼짐
//전등 스위치 구현
void loop() {
  int value = digitalRead(button);

  if(value == 0){  //버튼을 누르면
     if(ledState == 0){      
        digitalWrite(led, HIGH);
        delay(400);   //디바운싱(불완전하게 점멸) 문제 해결
        ledState = !ledState; //ledState = 1과 같음
     }
     else{
        digitalWrite(led, LOW);
        delay(400);
        ledState = !ledState; //ledState = 0과 같음        
     }   
  }
}
