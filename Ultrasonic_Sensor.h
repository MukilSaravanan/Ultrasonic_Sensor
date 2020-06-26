#ifndef Ultrasonic_Sensor_h
#define Ultrasonic_Sensor_h
#include "Arduino.h"

class Ultrasonic_Sensor
{
  private:

    byte _ledPin;
    byte _triggerPin;
    byte _echoPin;
    long _duration, _distance;
    long unsigned _delayTime;

  public:

    Ultrasonic_Sensor(byte triggerPin=11, byte echoPin=12, byte ledPin=13);
    long findDistance();
    long getDuration();
    void lightLED(int thresh,unsigned int delayTime=5000);

};

#endif
