int mappedFreq;

void play(int pin, int frequency) {
  mappedFreq = int(map(0,100,261,1046));
  tone(pin, mappedFreq);
}
