
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<unistd.h>
#include"derek_LED.h"
#include"GPIO.h"

using namespace std;
using namespace exploringBB;

int main(int argc, char* argv[]){
   LED led(3);
   GPIO extLed(49), inA(26), inB(46);
   
//   inA.setDirection(INPUT);
 //  inB.setDirection(INPUT);

   extLed.setDirection(OUTPUT);

   if (inA.getValue() == HIGH) extLed.setValue(LOW);
   else extLed.setValue(HIGH);
   cout << "Setting external LED " << !inA.getValue() << endl;
   if (inB.getValue() == LOW)led.turnOn(); 
   else led.turnOff();
   
   return 0;
}
