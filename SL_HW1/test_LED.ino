// test run
// Scream Lab HW1
// Edward Fung 2015.06.29
//
// 6*6 LED matrix
// clockwise formation
// 7.5 seconds each clock face, 60 seconds a full cycle
//
// PIN setup:   
//      [ A B C D E F ] coordinates
//___     2 3 4 5 6 7   pin
// 1  8   o o o o o o
// 2  9   o o o o o o
// 3  10  o o o o o o
// 4  11  o o o o o o
// 5  12  o o o o o o 
// 6  13  o o o o o o 
//___

int i=0;
int Loop=0;
// Longtitude pin figuration (up-down) POS
int LongPins[] = {2,3,4,5,6,7};
  
// Lattitude pin figuration (left-right) NEG
int LattPins[] = {8,9,10,11,12,13};

void setup() {
for (i=2; i<=13; i++)
   pinMode (i, OUTPUT);
}

void LED(int x,int y)
{
  int m=0;
  int n=0;
  digitalWrite(LongPins[0],LOW);
  digitalWrite(LongPins[1],LOW);
  digitalWrite(LongPins[2],LOW);
  digitalWrite(LongPins[3],LOW);
  digitalWrite(LongPins[4],LOW);
  digitalWrite(LongPins[5],LOW);
  digitalWrite(LattPins[0],HIGH);
  digitalWrite(LattPins[1],HIGH);
  digitalWrite(LattPins[2],HIGH);
  digitalWrite(LattPins[3],HIGH);
  digitalWrite(LattPins[4],HIGH);
  digitalWrite(LattPins[5],HIGH);
  digitalWrite(LongPins[x],HIGH);
  digitalWrite(LattPins[y],LOW);
}


void loop() {

  for(Loop=0;Loop<=200;Loop++)
  {
  // scene 1
  // C1,C2,C3,C4 ON
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,3);
  delay(1);
  }
  
  for(Loop=0;Loop<=200;Loop++)
  {
  // scene 4
  // C3,D4,E5,F6 ON
  LED(2,2);
  delay(1);
  LED(3,3);
  delay(1);
  LED(4,4);
  delay(1);
  LED(5,5);
  delay(1);
  }

}
