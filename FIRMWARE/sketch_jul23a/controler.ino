#define LeftT 1
#define RightT 2

#define A1 3
#define B1 4
#define A2 5
#define B2 6

bool dir = 0;


void setup() {
  pinMode(LeftT, INPUT);
  pinMode(RightT, INPUT);
  pinMode(A1, INPUT);
  pinMode(B1, INPUT);
  pinMode(A2, INPUT);
  pinMode(B2, INPUT);
  interrupts();
}

void loop() {
  delay(1);
}

void Ltrigger() {
    dir = !dir;
}

void Rtrigger() {
    dir = !dir;
}