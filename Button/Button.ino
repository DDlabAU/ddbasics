#include "DDbutton.h"
#include "general.h"

//Set the pin which the button is connected to
const int buttonPin = 3;

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (buttonIsDown(buttonPin)) {
    //write what happens if the button is pressed down
  } else if (buttonIsUp(buttonPin)) {
    //write what happens if the button is not pressed down
  }
}
