int getValue(int name) {
  int val = analogRead(name);
  Serial.println(val);
  int mapped = map(val, 0,1023,0,100);
  return mapped;
}
