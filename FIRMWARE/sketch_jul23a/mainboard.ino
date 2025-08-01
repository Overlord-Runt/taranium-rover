#define FrontFor 1
#define FrontBack 2
#define BackFor 3
#define BackBack 4

#define FrontS1 5
#define FrontS2 6
#define BackS1 7
#define BackS2 8

#define Servo1 9
#define Servo2 10
#define Servo3 11



void setup() {

  pinMode(FrontFor, OUTPUT);
  pinMode(FrontBack, OUTPUT);
  pinMode(BackFor, OUTPUT);
  pinMode(BackBack, OUTPUT);
  pinMode(FrontS1, OUTPUT);
  pinMode(FrontS2, OUTPUT);
  pinMode(BackS1, OUTPUT);
  pinMode(BackS2, OUTPUT);
  pinMode(Servo1, OUTPUT);
  pinMode(Servo2, OUTPUT);
  pinMode(Servo3, OUTPUT);
  interrupts();

}

void loop() {
  
  delay(1);
}

void LeftT() {
  if(digitalRead(Ltrigger)) {
    dir = !dir;
  }
}

