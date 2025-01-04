#include <Servo.h>

const int servoPin = 10;
Servo myServo;

void setup() {
  myServo.attach(servoPin);
  myServo.write(0);  //0도로 초기화

  delay(1000);

  for(int i = 0; i <= 3; i++){
    myServo.write(180);
    delay(1000);
    myServo.write(0);
    delay(1000);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
