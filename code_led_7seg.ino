#define sen1 A0
#define sen2 A1
#define sen3 A2
#define sen4 A3
#define sen5 A4
#define A 8
#define B 7
#define C 6
#define D 5
#define E 4
#define F 3
#define G 2
void setup() {
  // put your setup code here, to run once:
pinMode(sen1, INPUT_PULLUP);
pinMode(sen2, INPUT_PULLUP);
pinMode(sen3, INPUT_PULLUP);
pinMode(sen4, INPUT_PULLUP);
pinMode(sen5, INPUT_PULLUP);
for(int i = 2; i<=8;i++){
  pinMode(i, OUTPUT);
  delay(1);
}
so(0);
}
void so(int data){
  if(data == 0){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
  if(data == 1){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
if(data == 2){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
if(data == 3){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
if(data == 4){
digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);}
  if(data == 5){
digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);}}
void loop() {
  // put your main code here, to run repeatedly:
while(digitalRead(sen1) == 0){
  so(1);
}
while(digitalRead(sen2) == 0){
  so(2);
}
while(digitalRead(sen3) == 0){
  so(3);
}
while(digitalRead(sen4) == 0){
  so(4);
}
while(digitalRead(sen5) == 0){
  so(5);
}
}
