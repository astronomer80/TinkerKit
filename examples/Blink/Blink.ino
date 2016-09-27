/*
  based on Blink, Arduino's "Hello World!"
  Turns on an LED on for one second, then off for one second, repeatedly.
  The Tinkerkit Led Modules (T010110-7) is hooked up on D2
  This sketch is suitable for TinkerKit Sensor Shield V4
  http://www.arduino.org/tinkerkit/

  created in Dec 2011
  by Federico Vanzati
  modified in Sep 2016
  by Angelo Ferrante

  This example code is in the public domain.
 */
 
// include the TinkerKit library
#include <TinkerKit.h>

TKLed led(D2);	// creating the object 'led' that belongs to the 'TKLed' class 
		// and giving the value to the desired output pin

void setup() {
//nothing here
}

void loop() 
{
  led.on();       // set the LED on
  delay(1000);    // wait for a second
  led.off();      // set the LED off
  delay(1000);    // wait for a second
}
