const int photoR = A0;
const int led = 9;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  int value = analogRead(photoR);
  Serial.println(value);
  //delay(200);
  //analogWrite(led, value/4);
  
  if(value < 200){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
