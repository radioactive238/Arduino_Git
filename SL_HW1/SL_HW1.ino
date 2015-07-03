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
//-----PROGRAM START--------------------------------------------------------
int i=0;
int Loop=0;
// Longtitude pin figuration (up-down) POS
int LongPins[] = {2,3,4,5,6,7};
  
// Lattitude pin figuration (left-right) NEG
int LattPins[] = {8,9,10,11,12,13};
//-----FUNCTION DECLARATION-------------------------------------------------
// LED function
// enter coordinates to obtain single LED emission
// *First method failed due to residue flashes on unexpected LEDs*
//
//void LED(int x,int y)
//{
//  int m=0;
//  int n=0;
//  digitalWrite(LongPins[0],LOW);
//  digitalWrite(LongPins[1],LOW);
//  digitalWrite(LongPins[2],LOW);
//  digitalWrite(LongPins[3],LOW);
//  digitalWrite(LongPins[4],LOW);
//  digitalWrite(LongPins[5],LOW);
//  for(m=0; m<=5; m++)
//  {
//   if (m==x)
//    {
//    digitalWrite(LongPins[m],HIGH);
//    }
//  else
//    {
//    digitalWrite(LongPins[m],LOW);
//    }
//    
//  }
// 
//  for(n=0; n<=5; n++)
//  {
//  if (n!=y)
//    {
//    digitalWrite(LattPins[n],HIGH);
//    }
//  else
//    {
//    digitalWrite(LattPins[n],LOW);
//    }
//  
//  }
//}

//-----FUNCTION DECLARATION-------------------------------------------------
// Second method was much simpler, and no residue flashes
// but less awesome looking though
// LED configuration
// HIGH on + side
// LOW on - side
// HIGH on on pin will result in the whole column ON
// must cancel out other LED by applying HIGH on both pins
//      H H L L L H 
// [H]  x x o o o x (x is off, o is on)


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
for(Loop=0;Loop<=200;Loop++)
// try to get the loop time right next time
// each cycle is supposed to be 7.5 sec
  {
  // scene 1
  // C1,C2,C3,C4 ON
  LED(2,0);
  delay(1);
// each frame only consists of one LED
// by rapidly switching through different LEDs
// the persistence of vision would create the illusion of 
// all LEDs showing up at once
// *any delay longer than 10 ms would be visible 
  LED(2,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(2,3);
  delay(1);
  }
  
  for(Loop=0;Loop<=200;Loop++)
  {
  // scene 2
  // C4,D3,E2,F1 ON
  LED(2,3);
  delay(1);
  LED(3,2);
  delay(1);
  LED(4,1);
  delay(1);
  LED(5,0);
  delay(1);
  }
  
  for(Loop=0;Loop<=200;Loop++)
  {
  // scene 3
  // C3,D3,E3,F3 ON
  LED(2,2);
  delay(1);
  LED(3,2);
  delay(1);
  LED(4,2);
  delay(1);
  LED(5,2);
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

for(Loop=0;Loop<=200;Loop++)
  {
  // scene 5
  // D3,D4,D5,D6 ON
  LED(3,2);
  delay(1);
  LED(3,3);
  delay(1);
  LED(3,4);
  delay(1);
  LED(3,5);
  delay(1);
  }
  
for(Loop=0;Loop<=200;Loop++)
  {
  // scene 6
  // A6,B5,C4,D3 ON
  LED(0,5);
  delay(1);
  LED(1,4);
  delay(1);
  LED(2,3);
  delay(1);
  LED(3,2);
  delay(1);
  }

for(Loop=0;Loop<=200;Loop++)
  {
  // scene 7
  // A4,B4,C4,D4 ON
  LED(0,3);
  delay(1);
  LED(1,3);
  delay(1);
  LED(2,3);
  delay(1);
  LED(3,3);
  delay(1);
  }

for(Loop=0;Loop<=200;Loop++)
  {
  // scene 8
  // A1,B2,C3,D4 ON
  LED(0,0);
  delay(1);
  LED(1,1);
  delay(1);
  LED(2,2);
  delay(1);
  LED(3,3);
  delay(1);
  }

}
