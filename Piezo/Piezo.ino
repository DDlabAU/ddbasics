#include "DDpiezo.h"
#include "general.h"

//variable used for the pin you connect the piezo to
const int piezoPin = 9;


void setup(){
  pinMode(piezoPin, OUTPUT);
}

void loop(){
  //play a note in a pitch from 1 to 100. Play has 2 parameters:
  //1st: The pin the piezo is connected to
  //2nd: The pitch within a range of 1 to 100 you want the buzzer to play
  play(piezoPin,50);
  //pause for the amount of time (in seconds) that you want the peizo to sound
  pause(1);
  //play the highest note of the piezo
  highestNote(piezoPin);
  pause(1);
  //play the lowest note of the piezo
  lowestNote(piezoPin);
  pause(1);
  //stop the sound from the piezo
  noTone(piezoPin);
  pause(1);

}
