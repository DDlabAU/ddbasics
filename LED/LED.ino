#include "led.h"

// FARVER
// green, blue, yellow, purple, cyan, white, black

void setup() {
  pixels.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  ledOn(1,green, 50);
  ledOn(2,white, 10);
  pause(1.5);
  ledOn(1, purple, 5);
  ledOn(2, cyan, 80);
  pause(2);
}
