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

<InlineEntity>Servo</InlineEntity> myservo; // Create servo object
const int buttonPin = 2; // Push button connected to digital pin 2
const int servoPin = 9;  // Servo signal wire connected to pin 9

int currentAngle = 90;   // Starting position
const int targetAngle = 180; // Angle to move toward when pressed
const int angleStep = 2;   // Speed of movement

void setup() {
  Serial.begin(115200); // Set baud rate to 9600
  myservo.attach(servoPin); // Attach servo to pin 9
  pinMode(buttonPin, INPUT_PULLUP); // Button uses internal pull-up resistor
  myservo.write(currentAngle);
}

void loop() {
  // Read button state (LOW means pressed when using INPUT_PULLUP)
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    // Move servo while button is held down
    currentAngle += angleStep;
    if (currentAngle > 180) {
      currentAngle = 180; // Cap at 180 degrees
    }
    myservo.write(currentAngle);
    Serial.print("Servo Angle: ");
    Serial.println(currentAngle);
    delay(20); // Control movement speed
  }

  // When button is released, nothing happens and the servo holds its position
}


