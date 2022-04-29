#include "DDled.h"
#include "general.h"

// FARVER
// green, blue, yellow, purple, cyan, white, black

void setup() {
  pixels.begin();
}

void loop() {
  //ledOn has 3 parameters: 
  //1st: the number of the LED you want to light,
  //2nd: the color you want the LED,
  //3rd: the brightness of the LED indicated as a number between 0 (no light) and 100 (max brightness)
  ledOn(1,green, 50);
  ledOn(2,white, 10);
  pause(1.5);
  ledOn(1, purple, 5);
  ledOn(2, cyan, 80);
  pause(2);
}
