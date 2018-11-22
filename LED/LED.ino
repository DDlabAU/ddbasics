#include "led.h"

// FARVER
// green, blue, yellow, purple, cyan, white, black

void setup() {
  pixels.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  ledOn(1,green);
  ledOn(2,white);
  pause(1.5);
  ledOn(1, purple);
  ledOn(2, black);
  pause(2);
}
