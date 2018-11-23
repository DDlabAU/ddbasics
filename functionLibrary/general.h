float caliZero = 0;

int getValue(int name) {
  int val = analogRead(name);
  Serial.println(val);
  int mapped = map(val, 0,1023,0,100);
  return mapped;
}

void calibrate(int name) {
  int one = analogRead(name);
  delay(5);
  int two = analogRead(name);
  delay(5);
  int three = analogRead(name);
  caliZero = (one+two+three) / 3;
}
