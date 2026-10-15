# TempeHS Arduino Bootcamp

This is the folder structure and starter files for students completing the TempeHS Arduino Bootcamp.

The bootcamp uses the **official [Arduino Sensor Kit](https://sensorkit.arduino.cc/)**: a Grove base shield and prewired modules that connect with Grove cables (no breadboard wiring needed for the kit modules). Your kit also includes a **Grove Line Finder** and a **Grove 3-pin Ultrasonic sensor**. The motor activities use real wiring with external power.

## Getting started

1. Click **Use this template** then **Create a new repository**
2. Name it using the class convention: `2027CT_Arduino_Bootcamp_FirstName.Initial` (e.g. `2027CT_Arduino_Bootcamp_Ben.J`)
3. Open your repository in a **GitHub Codespace** (the **Arduino to Codespaces Bridge** extension installs automatically)
4. Plug in your Arduino Uno, click the bridge icon in the left navigation bar, run the server, then open the bridge
5. Upload a sketch through the bridge and you are ready to code

Full setup instructions are on the learning platform: **Arduino Bootcamp, Page 1: What is Mechatronics?**

1. What is the device?
The device is a sport specific prosthetic arm designed for Aaron to help him return to doing what he loves most, rock climbing. The main feature is a strong climbing attacchment that can grip and hold onto climbing holds. The device will sense the force and respond by gripping on securely to help Aaron stay in control while climbing.
Who is it for?
The prosthetic is for Aaron who has a mid section trans radial amputation of his right arm. Aaron enjoys bush walking and rock climbing and want to be able to climb again. The prosthetic has to be durable and strong and lightweight and comfortable enough for him to use during rock climbing.
Why is it needed?
The prosthetic is neede because of the traumatic amputation Aaron suffered. His medical notes confirm a mid-section trans-radial amputation of the right arm, and daily activites being difficult. A specialised prosthetic would address his specific need for a device that can withstand the physical demands of rock climbing.
How will it help?
The climbing prosthetic will allow Aaron to grip climbing holds more effectively and improve his balance, stability and control while climbing. This will help him safely participate in an activity he enjoys and increase his independence during physical activities and everyday tasks. Most importantly, the device will help Aaron work towards returning to rock climbing and improve his overall quality of life

The prosthetic is for Aaron who has a mid section trans radial amputation of his right arm. Aaron enjoys bush walking and rock climbing and want to be able to climb again. The prosthetic has to be durable and strong and lightweight and comfortable enough for him to use during rock climbing.


2.Hi, my name is Aaron, and I love to bush walk and rock climb. A few years ago, I was hiking in the Utah Mountains in America when I fell through a crevasse, and a large boulder crushed my arm forearm. Long story short, I now don't have a right arm, making climbing and performing daily activities difficult. Mostly I really miss being able to rock climb. What I need is a sports-specific prosthetic so I can climb again!

3.<img width="1153" height="2048" alt="image" src="https://github.com/user-attachments/assets/61adc4d3-5fd6-44f8-95be-b80686fed40a" />

First component is a emg sensor.







## The working rhythm

**Write** the code in your Codespace, **Upload** it to the Arduino, **Test** it with the sensor kit, then **Commit and Push** every working solution with a clear message and a photo of your build.

## Folder guide

| Folder                      | Lesson                                        | Hardware                                      |
| --------------------------- | --------------------------------------------- | --------------------------------------------- |
| `01.serialMonitor`          | Serial Monitor & Program Structure            | none                                          |
| `02.storingData`            | Variables & Data Types                        | none                                          |
| `03.buttonsAndDecisions`    | Digital I/O + selection (if/else/switch)      | Button D4, LED D6, Line Finder D7             |
| `04.analogueInOut`          | Analogue input + math + PWM output            | Pot A0, Sound A2, Light A3, LED D6, Buzzer D5 |
| `05.loopsAndTime`           | Loops + delay vs millis + random              | Button D4, Buzzer D5, LED D6                  |
| `06.servoMotor`             | Positional servo with the Servo library       | Servo D3, Pot A0                              |
| `07.ultrasonicAndFunctions` | Ultrasonic library + structuring functions    | Ultrasonic D2, Buzzer D5, LED D6              |
| `08.motorFundamentals`      | Direct-wire a DC motor + motor control theory | DC motor, battery pack (real wiring)          |
| `09.I2C`                    | I2C bus, OLED display and sensors             | OLED + I2C sensors                            |
| `10.OOP`                    | Object-Oriented Programming                   | LED D6 + built-in LED                         |
| `11.myProjects`             | Capstone builds                               | your choice                                   |

Each sketch's header comment lists the learning intention, success criteria and Grove ports for that activity. Folders also contain **optional breadboard schematics** (`Bootcamp-*.png`) showing how the same circuits are wired by hand without Grove modules, for anyone who wants to look under the hood.

## Standard Grove ports

![Arduino Uno pin-out for this bootcamp](pinout.png)

| Module                                             | Port    |
| -------------------------------------------------- | ------- |
| **DO NOT USE** (TX/RX serial to your computer)     | D0 / D1 |
| Ultrasonic (3-pin)                                 | D2      |
| Servo                                              | D3      |
| Button                                             | D4      |
| Buzzer                                             | D5      |
| LED                                                | D6      |
| Line Finder                                        | D7      |
| Spare (port-move experiments)                      | D8      |
| Potentiometer                                      | A0      |
| Spare (leave unconnected: `randomSeed` noise)      | A1      |
| Sound sensor                                       | A2      |
| Light sensor                                       | A3      |
| OLED, Temp & Humidity, Air Pressure, Accelerometer | I2C     |

## Libraries

Install these once via the bridge web interface **Libraries** tab:

| Library                | Needed from                                                        |
| ---------------------- | ------------------------------------------------------------------ |
| `Servo` (by Arduino)   | `06.servoMotor` onwards                                           |
| `Arduino_SensorKit`   | `09.I2C` (OLED + kit I2C sensors; installs U8g2 automatically)    |

The Ultrasonic library is bundled inside `07.ultrasonicAndFunctions` and needs no install.

## Links

1. [Arduino Sensor Kit documentation](https://sensorkit.arduino.cc/)
2. [Design Toolkit](https://tempehs.github.io/designToolKit/)
3. [TempeHS Arduino Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate) including the school sensor, module, shield and electronic component catalogue
