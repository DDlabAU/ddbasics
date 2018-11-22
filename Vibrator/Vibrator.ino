#include "vibratorCode.h"


void setup(){
  vibrator = 10;
  pinMode(vibrator, OUTPUT);
}

void loop(){
  vibrate(2, 100);
  delay(2000);
}
