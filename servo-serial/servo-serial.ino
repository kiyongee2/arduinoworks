#include<Servo.h>
Servo sv;
const int pin = 8;

void setup() {
  sv.attach(pin);
  sv.write(0);
  Serial.begin(115200);
}

void loop() {
  if(Serial.available()){
    char ch = Serial.read();

    switch(ch){
      case '1':
        sv.write(45);
        delay(1000);
        sv.write(0);
        break;
      case '2':
        sv.write(90);
        delay(1000);
        sv.write(0);
        break;
      case '3':
        sv.write(180);
        delay(1000);
        sv.write(0);
        break;
      default:
        break;   
    }
}


}
