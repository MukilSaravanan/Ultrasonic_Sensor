# Ultrasonic_Sensor

Arduino library for Ultrasonic Sensor (HC-SR04).
## Specifications
* Operating voltage: +5V
* Theoretical  Measuring Distance: 2cm to 450cm
* Practical Measuring Distance: 2cm to 80cm
* Accuracy: 3mm
* Measuring angle covered: <15°
* Operating Current: <15mA
* Operating Frequency: 40Hz

## Wiring

* It is quite easy to connect an ultrasound module to the Arduino.
* Connect the **trigger pin and echo pin** on the module to **digital pin 11 and 12** of the Arduino, respectively.
* Connect **an LED** to **digital pin 13** of the Arduino or use InBuilt LED of Arduino UNO.

![image](https://github.com/MukilSaravanan/Ultrasonic_Sensor/blob/master/Schematic%20diagram.png)

## Table of Contents  
[Installation](#installation)  
[Documentation](#documentation) <br />
[Contributing](#contributing) <br />
[Support](#support)

## Installation
### Download zip
  * Download as zip file to your local machine using `https://codeload.github.com/MukilSaravanan/Ultrasonic_Sensor/zip/master` 
  or click [here](https://codeload.github.com/MukilSaravanan/CR2-Deleter/zip/master) 
### Importing the library
  * In the Arduino IDE, navigate to **Sketch > Include Library > Add .ZIP Library**. 
  At the top of the drop down list, select the option to **Add .ZIP Library**.
  * You will be prompted to select the library you would like to add. Navigate to the .zip file's location and open it.
  * Return to the **Sketch > Include Library** menu. You should now see the library at the bottom of the drop-down menu.
  It is ready to be used in your sketch. The zip file will have been expanded in the libraries folder in your Arduino sketches directory.
  <a name="installation"/>
  
## Documentation
* To create an object, use <br /> `Ultrasonic_Sensor uss = Ultrasonic_Sensor(triggerPin,echoPin,LEDPin);`.
* To find the distance between the sensor and the obstacle, use <br />`uss.findDistance();`.
  This returns distance in centimeters of long data type.
* To find the duration required for the Ultrasonic rays to bounce back from the obstacle, use <br />
  `uss.getDuration();`. This returns bounce back duration in microseconds of long data type.
*  To light up the LED for certain duration, when the distance is above the threshold value, use <br />
   `uss.lightLED(thresh,delayTime);`.<br />
**For more info, see the example code of this library.**   
<a name="documentation"/>

## Contributing
  ### Step 1
  * **Option 1**
    - Fork this repo using https://github.com/MukilSaravanan/Ultrasonic_Sensor/fork
  * **Option 2**
     - Clone this repo to your local machine using `https://github.com/MukilSaravanan/Ultrasonic_Sensor.git`
  ### Step 2
  * Create a new feature branch `git checkout -b feature`
  * Commit your changes `git commit -am 'Add some updates`
  * Push to the branch `git push origin feature`
  ### Step 3
  - Create a new pull request using https://github.com/MukilSaravanan/Ultrasonic_Sensor/compare/ <a name="contributing"/>
## Support
* LinkedIn - https://www.linkedin.com/in/mukil-saravanan-18800285
