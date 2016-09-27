/*
 Reads a T000030 Joystick Module Analog Sensor connected to A0 and A1,
 then set the brightness of two T010111 LED Module connected on D2 and D3
 with the values. Also prints the results to the serial monitor.
 http://www.arduino.org/tinkerkit

 created  7 dec 2010
 by Davide Gomba 
 modified on Dec 2011
 by Federico Vanzati
 modified on Jun 2013
 by Matteo Loglio<http://matlo.me>
 modified on Sep 2016
 by Angelo Ferrante


 This example code is in the public domain.
 */

// include the TinkerKit library
#include <TinkerKit.h>

TKJoystick joystick(A0, A1);  // creating the object 'joystick' that belongs to the 'TKJoystick' class 
                       	      // and giving the values to the desired input pins

TKLed xLed(D2), yLed(D3);     // creating the objects 'xLed' & 'yLed' that both belongs to the 'TKLed' class 
                              // and giving the values to the desired output pins

int x = 0;      // a variable for the Joystick's x value
int y = 0;      // a variable for the Joystick's y value

void setup() 
{
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop()
{
  // read the both joystick axis values:
  x = joystick.readX();  
  y = joystick.readY(); 

  // set the leds brightness
  xLed.brightness(x);
  yLed.brightness(y);

  // print the results to the serial monitor:
  Serial.print("Joystick X = " );                       
  Serial.print(x);   
  Serial.print("\t Joystick Y = " );                       
  Serial.println(y);     

  // wait 10 milliseconds before the next loop
  delay(10);    
}

