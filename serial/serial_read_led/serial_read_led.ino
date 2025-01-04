const int led = 6;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available()){
    char ch = Serial.read();
    Serial.println(ch);

    if(ch == '0'){
      analogWrite(led, 0);
    }
    if(ch == '1'){
      analogWrite(led, 50*1);
    }
    if(ch == '2'){
      analogWrite(led, 50*2);
    }
    if(ch == '3'){
      analogWrite(led, 50*3);
    }
    if(ch == '4'){
      analogWrite(led, 50*4);
    }
    if(ch == '5'){
      analogWrite(led, 50*5);
    }
  }
}
