/*
 Read values from the T000090 LDR Analog Sensor connected to A0, 
 then uses the result to set the brightness on a T010111 LED 
 Module connected on D2. Also prints the values on the 
 serial monitor.

 created 29 Dec. 2008
 Modified 4 Sep 2010
 by Tom Igoe
 modified 7 dec 2010
 by Davide Gomba
 modified on Ded 2011
 by Federico Vanzati
 modified Jun 2013
 by Matteo Loglio<http://matlo.me>
 modified Sep 2016
 by Angelo Ferrante

 This example code is in the public domain.
 */

#include <TinkerKit.h>

TKLightSensor ldr(A0);	//create the "ldr" object on port A0

TKLed led(D2);		//create the "led" object on port D2

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // store the ldr values into a variable called brightnessVal
  int brightnessVal = ldr.read();            

  // set the led brightness
  led.brightness(brightnessVal);       
  
  //to have it at full brightness
  //when it's dark, uncomment this line:
  //led.brightness(1023 - brightnessVal);

  // print the results to the serial monitor:
  Serial.print("brightness = " );                      
  Serial.println(brightnessVal);      


  // wait 10 milliseconds before the next loop
  delay(10);                    
}
