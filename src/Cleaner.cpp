/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "/Users/cwd/Dropbox/code/particle.io/cleanRoom/Cleaner/src/Cleaner.ino"
/*
 * Project Cleaner
 * Description:
 * Author: CWD
 * Date: 20200330
 */

void setup();
void loop();
#line 8 "/Users/cwd/Dropbox/code/particle.io/cleanRoom/Cleaner/src/Cleaner.ino"
int sensorPin01=A0;
int analogvalue01=0;


// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(9600);
  Serial.println("Starting up");
  Particle.variable("analogvalue01", analogvalue01);
  pinMode(sensorPin01, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  analogvalue01 = analogRead(sensorPin01);
  Serial.print("sensor reads: ");
  Serial.println(analogvalue01);
  delay(3000);
}