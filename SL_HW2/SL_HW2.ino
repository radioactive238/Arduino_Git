// Scream Lab HW2
// Edward Fung 2015.07.1
//
// Little Green Man Running
// Probably just the legs running cuz the LEDs aren't enough to display
//     @ @ 0 0 @ @
//     @ @ 0 0 @ @
//     @ @ 0 @ 0 @
//     0 0 @ @ 0 @
//     0 @ @ @ 0 @
//     @ @ @ @ 0 0
// Refs at "walking man.xlsx"
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
//-----PROGRAM START--------------------------------------------------------
int i=0;
int Loop=0;
// Longtitude pin figuration (up-down) POS
int LongPins[] = {2,3,4,5,6,7};
  
// Lattitude pin figuration (left-right) NEG
int LattPins[] = {8,9,10,11,12,13};

//-----FUNCTION DECLARATION-------------------------------------------------
// LED configuration
// HIGH on + side
// LOW on - side
// HIGH on on pin will result in the whole column ON
// must cancel out other LED by applying HIGH on both pins
//      H H L L L H 
// [H]  @ @ o o o @ 
// 
// 
void LED(int x,int y)
{
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
//-----MAIN PROGRAM---------------------------------------------------------
void setup() {
for (i=2; i<=13; i++)
   pinMode (i, OUTPUT);
}

void loop() {
for(Loop=0;Loop<=100;Loop++)
  {
  // step 1
  // A4~5,B4,C1~3,D1~2,E3~6,F6 ON
  LED(0,3);
  delay(1);
  LED(0,4);
  delay(1);
  LED(1,3);
  delay(1);
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(3,0);
  delay(1);
  LED(3,1);
  delay(1);
  LED(4,2);
  delay(1);
  LED(4,3);
  delay(1);
  LED(4,4);
  delay(1);
  LED(4,5);
  delay(1);
  LED(5,5);
  delay(1);
  }
  
  for(Loop=0;Loop<=100;Loop++)
  {
  // step 2
  // B4~6,C1~3,C6,D1~2,E3~6,F6 ON
  LED(1,3);
  delay(1);
  LED(1,4);
  delay(1);
  LED(1,5);
  delay(1);
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,5);
  delay(1);
  LED(3,0);
  delay(1);
  LED(3,1);
  delay(1);
  LED(4,2);
  delay(1);
  LED(4,3);
  delay(1);
  LED(4,4);
  delay(1);
  LED(4,5);
  delay(1);
  LED(5,5);
  delay(1);
  }
  
  for(Loop=0;Loop<=100;Loop++)
  {
  // step 3
  // B4~6,C1~3,C6,D1~6,E6 ON
  LED(1,3);
  delay(1);
  LED(1,4);
  delay(1);
  LED(1,5);
  delay(1);
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,5);
  delay(1);
  LED(3,0);
  delay(1);
  LED(3,1);
  delay(1);
  LED(3,2);
  delay(1);
  LED(3,3);
  delay(1);
  LED(3,4);
  delay(1);
  LED(3,5);
  delay(1);
  LED(4,5);
  delay(1);
  }
  
  for(Loop=0;Loop<=100;Loop++)
  {
  // step 4
  // C1~6,D1~2,D6 ON
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,3);
  delay(1);
  LED(2,4);
  delay(1);
  LED(2,5);
  delay(1);
  LED(3,0);
  delay(1);
  LED(3,1);
  delay(1);
  LED(2,5);
  delay(1);
  }

for(Loop=0;Loop<=100;Loop++)
  {
  // step 5
  // B4~6,C1~3,C6,D1~6,E6 ON
  LED(1,3);
  delay(1);
  LED(1,4);
  delay(1);
  LED(1,5);
  delay(1);
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,5);
  delay(1);
  LED(3,0);
  delay(1);
  LED(3,1);
  delay(1);
  LED(3,2);
  delay(1);
  LED(3,3);
  delay(1);
  LED(3,4);
  delay(1);
  LED(3,5);
  delay(1);
  LED(4,5);
  delay(1);
  }
  
for(Loop=0;Loop<=100;Loop++)
  {
  // step 6
  // B4~6,C1~3,C6,D1~2,E3~6,F6 ON
  LED(1,3);
  delay(1);
  LED(1,4);
  delay(1);
  LED(1,5);
  delay(1);
  LED(2,0);
  delay(1);
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,5);
  delay(1);
  LED(3,0);
  delay(1);
  LED(3,1);
  delay(1);
  LED(4,2);
  delay(1);
  LED(4,3);
  delay(1);
  LED(4,4);
  delay(1);
  LED(4,5);
  delay(1);
  LED(5,5);
  delay(1);
  }

}
