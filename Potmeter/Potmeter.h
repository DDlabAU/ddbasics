int getValue(int name) {
  int value = analogRead(name);
  int mapped = map(value, 0, 1023,0,100);
  return mapped;
}

boolean lowerHalf(int name) {
  int value = analogRead(name);
  if (value < 511) {
    return true;
  } else {
    return false;
  }
}

boolean UpperHalf(int name) {
  int value = analogRead(name);
  if (value >= 511) {
    return true;
  } else {
    return false;
  }
}

boolean islowest(int name) {
  int value = analogRead(name);
  if (value == 0) {
    return true;
  } else {
    return false;
  }
}

boolean isHighest(int name) {
  int value = analogRead(name);
  if (value == 1023) {
    return true;
  } else {
    return false;
  }
}
