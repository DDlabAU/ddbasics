int mappedFreq;

void play(int pin, int frequency) {
  mappedFreq = map(frequency,0,100,261,1046);
  tone(pin, mappedFreq);
}

void highestNote(int pin){
  tone(pin, 1046);
}

void lowestNote(int pin) {
  tone(pin,261);
}
