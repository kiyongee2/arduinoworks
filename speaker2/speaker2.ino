#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
const int speaker = 9;

void setup() {
  for(int i=3; i<7; i++){
     pinMode(i, INPUT_PULLUP);
  }
}

void loop() {
  if(digitalRead(3)==0){
    tone(9, NOTE_C4, 100);
  }
  if(digitalRead(4)==0){
    tone(9, NOTE_D4, 100);
  }
  if(digitalRead(5)==0){
    tone(9, NOTE_E4, 100);
  }
  if(digitalRead(6)==0){
    tone(9, NOTE_F4, 100);
  }
}
