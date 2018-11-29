#ifndef DDservo_h
#define DDservo_h

#include <Arduino.h>
#include <Servo.h>
extern Servo _servo;

class DDservo
{
  public:
    DDservo(int pin);
    int mappingF(int input);
    void maxP();
    void minP();
    void goTo(int i);
    void sweepTo(int goal, float t);
    int getPos();
    void setType(int type);
  private:
    int _servoType;
    int _pos;
    int _pin;
    bool _attached;
    Servo _servo;
    int _servoPin;
};
#endif
