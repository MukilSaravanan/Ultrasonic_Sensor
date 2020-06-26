/* Ultrasonic_Sensor Example

  1) Prints the distance between the sensor and the obstacle in the serial monitor.
  2) Prints the duration required for the Ultrasonic rays to bounce back from the obstacle in the serial monitor.
  3) Lights up the LED for certain duration, when the distance is above the threshold value.

  The circuit:
   Use the onboard LED.
   Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
    Uses HC-SR 04 (Ultrasonic sensor)

  ----------------------------------------------------------------
      Arduino UNO         |             Components
  ----------------------------------------------------------------
      Digital Pin 11      |     Trigger Pin (Ultrasonic Sensor)
      Digital Pin 12      |     Echo Pin (Ultrasonic Sensor)
      Digital Pin 13      |     Anode Pin (LED)
      GND                 |     Cathode Pin (LED)
  ----------------------------------------------------------------


  created 2020
  by Mukil Saravanan

*/

//Importing the Ultrasonic_Sensor library
#include <Ultrasonic_Sensor.h>

//uncomment the required lines and change the digital pins as per your requirements
//byte triggerPin=11;
//byte echoPin=12;
//byte LEDPin=13;
//unsigned int delayTime=5000;

//threshold distance (in centimeters)
int thresh = 100;

//Uncomment the required line when you want to use custom pins

//Ultrasonic_Sensor uss= Ultrasonic_Sensor(triggerPin);
//Ultrasonic_Sensor uss= Ultrasonic_Sensor(triggerPin,echoPin);
//Ultrasonic_Sensor uss= Ultrasonic_Sensor(triggerPin,echoPin,LEDPin);

//Initialising an object 'uss'
Ultrasonic_Sensor uss = Ultrasonic_Sensor();

void setup() {

  //The pinMode initialisations are already done by the constructor

  //Initialising the serial monitor at 9600 baud
  Serial.begin(9600);

}

void loop() {

  long distance = uss.findDistance();
  long duration = uss.getDuration();

  //Prints the distance between sensor and the Ultrasonic sensor in the serial monitor.
  Serial.print("Distance: "); 
  
  //Approximate Range of HC-SR04
  if (distance >= 200 || distance <= 0)
  {
    Serial.print("OUT OF RANGE");
  }
  else
  {
    Serial.print(distance);
    Serial.print(" cm");
  }

  //Prints the bounce back time (in microseconds) in the serial monitor.
  Serial.print("\t Duration: "); Serial.print(duration); Serial.println(" microseconds");

  //Uncomment the next line if you want to use different delay duration (default delay time is 5000 milliseconds)
  //uss.lightLED(thresh,delayTime);

  //Lights up the LED for 5000 milliseconds, when the distance is above the threshold value.
  uss.lightLED(thresh);

  delay(500);
}
