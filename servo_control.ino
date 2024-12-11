#include <ESP32Servo.h>

Servo myServo;  // Create a servo object to control a servo motor

const int servoPin = 2;  // Connect the servo signal wire to GPIO 2
const int delayTime = 15;  // Delay time between servo steps in milliseconds

void setup() {
  myServo.setPeriodHertz(50);  // Standard 50 Hz servo
  myServo.attach(servoPin);    // Attaching the servo to the specified pin
}

void loop() {
  // Gradually move the servo motor from 270 to -270 degrees
  for (int pos = 270; pos >= -270; pos--) {
    myServo.write(pos);
    delay(delayTime);
  }

  // Pause at -270 degrees for 2 seconds
  delay(2000);

  // Gradually move the servo motor from -270 to 270 degrees
  for (int pos = -270; pos <= 270; pos++) {
    myServo.write(pos);
    delay(delayTime);
  }

  // Pause at 270 degrees for 2 seconds
  delay(100);
}
