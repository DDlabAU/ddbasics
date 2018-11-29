#include "DDvibrator.h"
#include "general.h"

void setup(){
  //set the pin which the vibrator is connected to
  vibrator = 10;
  pinMode(vibrator, OUTPUT);
}

void loop(){
  //vibrate takes two parameters
  //1st: The amount of time you want the vibrator to vibrate in seconds
  //2nd: The strength/intencity you want the vibrator tovibrate with, indicated with a number between 0 (no vibration) and 100 (max vibration)
  vibrate(2, 100);
  delay(2000);
}
