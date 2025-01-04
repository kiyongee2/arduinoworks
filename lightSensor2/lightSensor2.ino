//빛센서 값이 커지면 소리 재생
void setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A1);
  //Serial.println(value);
  //delay(500);
  if(value > 700){
     analogWrite(9, 150);   
  }
  else{
    analogWrite(9, 0);
  }

}
