const int activeB = 10;
const int trigPin = 11;
const int echoPin = 12;

void setup() {
  pinMode(activeB, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  // 초음파 발사
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // 초음파 수신 ms -> distance
  long timeDistance = pulseIn(echoPin, HIGH);
  // 편도 거리
  long distance = (timeDistance/2) / 29.1;

  // 거리가 5cm 미만이면 부저 소리 재생
  if(distance < 5){
    for(int i=0; i<3; i++){
      analogWrite(activeB, 50);
      delay(200);
      analogWrite(activeB, 0);
      delay(200);
    }
  }else if(distance < 10){
    for(int i=0; i<3; i++){
      analogWrite(activeB, 50);
      delay(500);
      analogWrite(activeB, 0);
      delay(500);
    }
  }

  //delay(1000);  // 1초 간격으로 소리 재생

  Serial.print(distance);
  Serial.println("cm");
}
