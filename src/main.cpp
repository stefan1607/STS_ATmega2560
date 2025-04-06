//
//      Author: Stefan Soyka
//      Date: 06/04/2025
//      Title: Small test program for Arduino Mega2560
//


#include <Arduino.h>
//#include <avr/io.h>
//#include <avr/interrupt.h>
#include "avr8-stub.h"


// put function declarations here:
uint8_t count =0;

void setup()
{

  //debug_init();

  // put your setup code here, to run once:
  Serial.begin(1152000);
  delay(2000);
  Serial.println("Hello, world!");
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(".");
  count++;
  if (count == 20)
  {
    count = 0;
    Serial.println();
  }

  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second

}
