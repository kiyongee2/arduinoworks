const int varR = A1;
const int led[3] = {5, 6, 7};

void setup() {
  Serial.begin(115200);
  for(int i=0; i<3; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  int value = analogRead(varR);
  Serial.println(value);
  //delay(300);

  // 가변저항: 0 ~ 1023, LED: 0 ~ 255
  if(value >= 256){
    digitalWrite(led[0], HIGH);
  }else{
    digitalWrite(led[0], LOW);
  }

  if(value >= 512){
    digitalWrite(led[1], HIGH);
  }else{
    digitalWrite(led[1], LOW);
  }

  if(value >= 768){
    digitalWrite(led[2], HIGH);
  }else{
    digitalWrite(led[2], LOW);
  }
}
