/*
Write the output of a MosFet Module using a 
Potentiometer Module.
http://www.arduino.org/tinkerkit
 
Jun 13 - matteo loglio <http://matlo.me>
Sep 16 - Angelo Ferrante
 
This example code is in the public domain.
*/

// include the TinkerKit library
#include <TinkerKit.h>
 
TKMosFet mos(D2);         //create the mos object
TKPotentiometer pot(A0);  //create the pot object
 
void setup() {
  //nothing here
}
 
void loop() 
{
  int val = pot.read(); //assign to a "val" variable
                        //the potentiometer values

  mos.write(val);       //assign the values to the mosfet
  
  delay(10);            //rest for 10 milliseconds.
}

