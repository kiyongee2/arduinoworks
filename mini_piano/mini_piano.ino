//미니 피아노 만들기
#define NOTE_C4 262  //도
#define NOTE_D4 294  //레
#define NOTE_E4 330  //미
#define NOTE_F4 349  //파
#define NOTE_G4 392  //솔
#define NOTE_A4 440  //라
#define NOTE_B4 494  //시
#define NOTE_C5 523  //도

int melody[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, 
          NOTE_A4, NOTE_B4, NOTE_C5};  //음계 배열
int button[] = {3, 4, 5, 6};  //버튼 배열
int photoR = A1;  //빛센서(photoResister)
int speaker = 9;  //스피커
void setup() {
  pinMode(photoR, INPUT);
  for(int i=0; i<4; i++){
    pinMode(button[i], INPUT_PULLUP);
  }
  Serial.begin(115200);
}

void loop() {
  int lightVal = analogRead(photoR);
  // Serial.println(lightVal);
  // delay(500);
   
  if(lightVal < 500){
    for(int i=0; i<4; i++){
      if(digitalRead(button[i]) == 0){
        tone(speaker, melody[i], 100);      
      }
    }
  }
  else{
    for(int i=0; i<4; i++){
      if(digitalRead(button[i]) == 0){
        tone(speaker, melody[i+4], 100);      
      }
    }
  }
}







