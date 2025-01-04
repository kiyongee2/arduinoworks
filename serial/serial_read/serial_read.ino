const int led = 6;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available()){
    char ch = Serial.read();
    Serial.println(ch);

    if(ch == '1'){
      digitalWrite(led, HIGH);
    }
    if(ch == '2'){
      digitalWrite(led, LOW);
    }
  }
}
