/*
  Test the different Button methods: pressed, released, held
  and getSwitch. 
  This sketch is suitable for the TinkerKit Sensor Shield V4
  
  modified by Matteo Loglio on 6/7/13
  modified by Angelo Ferrante in Sep 2016
*/

#include <TinkerKit.h>

TKButton btn(D2);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(btn.pressed())
    Serial.println("pressed"); 
  if(btn.held())
    Serial.println("held"); 
  if(btn.released()) {
    Serial.println("released"); 
    Serial.print("switch: ");
    Serial.println(btn.readSwitch());
  }

  delay(50);  
}



