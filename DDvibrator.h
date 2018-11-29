int vibrator;

void vibrate(int time,int strength){
  strength = map(strength,0,100,0,255);
  analogWrite(vibrator,strength);
  delay(time*1000);
  analogWrite(vibrator, 0);

}
