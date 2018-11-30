#include <Arduino.h>
#include <Servo.h>
#include <DDservo.h>

DDservo::DDservo(int pin){
  Servo _servo;
  _pin = pin;
  _servoType = 180;
  // _servo.attach(_pin);
  minP();
  _pos = 0;
}

int DDservo::mappingF(int input){
  int mappedValue = map(input, 0, 100, 0, _servoType);
  return mappedValue;
}

void DDservo::setType(int type){
  _servoType = type;
}

void DDservo::maxP(){
  _servo.write(_servoType);
  _pos = _servoType;
}

void DDservo::minP(){
  _servo.write(0);
  _pos = 0;
}

void DDservo::goTo(int i){
    _servo.write(mappingF(i));
    _pos = i;
}

void DDservo::sweepTo(int goal, float t){
  int mGoal = mappingF(goal);
  int steps = abs(_pos-mGoal);
  int timeSteps = t*1000/steps;
  if(_pos<goal){
    for(int i=_pos; i<=mGoal; i++){
      _servo.write(i);
      delay(timeSteps);
    }
  }else{
    for(int i=_pos; i>=mGoal; i--){
      _servo.write(i);
      delay(10);
    }
  }
  _pos = mGoal;
}

int DDservo::getPos(){
  return _pos;
}

void DDservo::activate(){
  _servo.attach(_pin);
}
void DDservo::deactivate(){
  _servo.detach();
}
