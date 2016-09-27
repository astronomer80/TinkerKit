/*
 Relay

 Turns on and off a Relay Module connected to A0,
 when pressing a Button Module attached to D2.
 http://www.arduino.org/tinkerkit

 This example code is in the public domain.
 
 created in Dec 2011
 by Federico Vanzati
 modified in Jun 2013
 by Matteo Loglio<http://matlo.me>
 modified in Sep 2016
 by Angelo Ferrante
 

 This example code is in the public domain.
 */

// include the TinkerKit library
#include <TinkerKit.h>

TKButton btn(A0);    // creating the object 'led' that belongs to the 'TKLed' class 
		     // and giving the value to the desired output pin

TKMosFet relay(D2);  // creating the object 'relay' that belongs to the 'TKRlay' class 
                     // and giving the value to the desired output pin

void setup() {
  // TinkerKit 'object' eliminate the need for pin declaration with pinMode()
}

void loop() 
{
  // check the switch state
  if(btn.readSwitch() == HIGH) {  
    relay.on();  
  }
  else{                       
    relay.off();  
  }
}

