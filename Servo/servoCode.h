Servo myservo;
int servoType = 180;
// int servoType = 360;

int pos = 0;

void maxP(){
  myservo.write(servoType);
  pos = servoType;
}

void minP(){
  myservo.write(0);
  pos = 0;
}

void goTo(int i){
    myservo.write(i);
    pos = i;
}

void sweepTo(int goal){
  if(pos<goal){
    for(int i=pos; i<=goal; i++){
      myservo.write(i);
      delay(10);
    }
  }else{
    for(int i=pos; i>=goal; i--){
      myservo.write(i);
      delay(10);
    }
  }
  pos = goal;
}

void pause(float t){
  int p = t * 1000;
  delay(p);
}
