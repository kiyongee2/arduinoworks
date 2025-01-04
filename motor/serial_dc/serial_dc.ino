int in1 = 7;
int in2 = 5;

void setup() {
  Serial.begin(115200);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);  
}

void loop() {
  if(Serial.available()){
    char ch = Serial.read();
    Serial.println(ch);

    if(ch == '1'){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
    }else if(ch == '2'){
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
    }else{
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
    }
  }
}
