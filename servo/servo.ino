#include<Servo.h>
Servo sv;
int pin = 8;

void setup() {
  sv.attach(pin);
}

void loop() {
  //1초 간격으로 작동
  /*sv.write(0);
  delay(500);
  sv.write(90);
  delay(500);*/

  //모터 회전
  for(int i=0; i<180; i++){
    sv.write(i);
    delay(20);
  }
  for(int i=180; i>=0; i--){
    sv.write(i);
    delay(20);
  }  

}
