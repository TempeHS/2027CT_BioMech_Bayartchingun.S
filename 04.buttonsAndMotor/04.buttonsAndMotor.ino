/*
  Author:

  Learning Intention:
  The students will connect and control a positional servo motor with the Servo library.

  Success Criteria:
    1.  I understand how to connect the servo motor (Grove connector, signal on D3)
    2.  I can manually write different degrees of movement to the servo
    3.  I can map a potentiometer to a servo and control its movement
    4.  I understand the servo's angle is set by the width of each timed pulse
        sent from the microcontroller (the Servo library handles this)

  Hardware:
    Servo          -> Grove connector to D3 (yellow = signal)
    Potentiometer  -> A0
    Small servos can run from the shield's 5V. Larger servos need external power
    with a common ground (you will do this properly in 08.motorFundamentals).

  Optional breadboard reference:
    Bootcamp-servoMotor.png shows the same servo hand-wired without a Grove connector.

  Library setup (once):
    Open the bridge web interface, go to the Libraries tab, search for
    "Servo" (by Arduino) and install it. That provides the #include <Servo.h>
    used below.

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo  <-- We are still using this library
*/

#include <Servo.h>

// Pin definitions
const int BUTTON_PIN = 2; // Pin connected to the button
const int SERVO_PIN  = 8; // Pin connected to the servo signal

// Position definitions
const int ORIGINAL_POS = 0;   // Starting/resting position in degrees
const int MOVED_POS    = 180;  // Position while holding the button

#include <Servo.h>

Servo myServo;

const int buttonPin = 2;  // Connect push button to pin 2
const int servoPin = 3;   // Connect servo signal wire to pin 3

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up resistor
  myServo.attach(servoPin);
  myServo.write(0);                 // Start at original position (0 degrees)
}

void loop() {
  // LOW means the button is pressed (with INPUT_PULLUP)
  if (digitalRead(buttonPin) == LOW) {
    myServo.write(180); // Move servo to 180 degrees while pressed
  } else {
    myServo.write(0);   // Return to original position (0 degrees) when released
  }
}

