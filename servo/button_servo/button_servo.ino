#include <Servo.h>

const int servoPin = 10;
const int btn1 = 5;
const int btn2 = 6;

Servo myServo;
int angle = 0;

void setup() {
  myServo.attach(servoPin);
  myServo.write(0);  //0도로 초기화

  pinMode(btn1, INPUT);

  Serial.begin(115200);
  
}

void loop() {
  Serial.println(digitalRead(btn1));

  if(digitalRead(btn1) == HIGH){
    angle = 90;
    myServo.write(angle);
  }else if(digitalRead(btn2) == HIGH){
    angle = 180;
    myServo.write(angle);
  }
}
