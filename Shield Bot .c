#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
 servoLeft.attach(13);
 servoRight.attach(12);
 
 servoLeft.writeMicroseconds(1700);
 servoRight.writeMicroseconds(1300);
 delay(3000);
 servoLeft.writeMicroseconds(1700);
 servoRight.writeMicroseconds(1700);
 delay(600);
 servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1700);
}

void loop() {
}
