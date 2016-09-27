/*
 Tilt Sensor
 
 Turns on and off a LED connected to A0,  
 triggered by a Tilt Sensor attached to D2.
 
 http://www.arduino.org/tinkerkit

 created 2005
 by DojoDave <http://www.0j0.org>
 modified 17 Jun 2009
 by Tom Igoe
 modified 7 dec 2010
 by Davide Gomba
 modified 29 Nov 2011
 by Priya Kuber & Federico Vanzati
 modified 7 Jun 2013
 by Matteo Loglio <http://matlo.me>
 modified on Sep 2016
 by Angelo Ferrante

 
 This example code is in the public domain.
 */

#include <TinkerKit.h> 

TKTiltSensor tilt(A0);  // creating the object 'tilt' that belongs to the 'TKTiltSensor' class 
      // and giving the value to the desired input pin

TKLed led(D2);          // creating the object 'led' that belongs to the 'TKLed' class 
                        // and giving the value to the desired output pin


void setup() { 
  // The 'objects' created above, eleminates the need for pinMode().
}

void loop(){
  // check if the tilt Sensor  is tilted.
  if (tilt.read() == HIGH) {   // if it is, the tilt.state() is HIGH
    led.on();                 // turn LED on
  } 
  else {                    // if it is not, the tilt.state() is LOW
    led.off();                // turn LED off
  }
}

