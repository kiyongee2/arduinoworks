const int trigPin = 11;
const int echoPin = 12;

 void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // ms -> distance
  long timeDistance = pulseIn(echoPin, HIGH);
  // 편도 거리
  long distance = (timeDistance/2) / 29.1;

  Serial.print(distance);
  Serial.println("cm");
}
