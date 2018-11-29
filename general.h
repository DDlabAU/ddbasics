float caliZero = 0;

int getValue(int name) {
  int val = analogRead(name);
  Serial.println(val);
  int mapped = map(val, 0,1023,0,100);
  return mapped;
}

int calibrate(int name) {
  int one = analogRead(name);
  delay(5);
  int two = analogRead(name);
  delay(5);
  int three = analogRead(name);
  caliZero = (one+two+three) / 3;
}

void pause(float t){
  int p = t * 1000;
  delay(p);
}
