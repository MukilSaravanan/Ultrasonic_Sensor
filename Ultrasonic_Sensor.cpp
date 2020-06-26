#include "Ultrasonic_Sensor.h"
#include "Arduino.h"


Ultrasonic_Sensor::Ultrasonic_Sensor(byte triggerPin=11, byte echoPin=12, byte ledPin=13)
{
  _ledPin = ledPin;
  _triggerPin = triggerPin;
  _echoPin = echoPin;
  pinMode(_triggerPin,OUTPUT);
  pinMode(_ledPin,OUTPUT);
}

long Ultrasonic_Sensor::findDistance()
{
  digitalWrite(_triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_triggerPin, LOW);
  _duration = pulseIn(_echoPin, HIGH);
  _distance=(_duration / 2 ) / 29.1 ;

  return _distance;
}

long Ultrasonic_Sensor::getDuration()
{
  return _duration;
}

void Ultrasonic_Sensor::lightLED(int thresh,unsigned int delayTime=5000)
{
  long unsigned lastTime = millis();
  if (_distance >= thresh)
  {
    digitalWrite(_ledPin, HIGH);
    if (millis() - lastTime >= delayTime )
    {
      digitalWrite(_ledPin, LOW);

    }

  }

}

