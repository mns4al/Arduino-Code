#include <Servo.h>

Servo servoLeft; 
Servo servoRight; 
void setup() {
  // put your setup code here, to run once:
  servoLeft.attach(13);
 servoRight.attach(12);
 servoLeft.writeMicroseconds(1700); 
 servoRight.writeMicroseconds(1300); 
 delay(4900); 
 servoLeft.writeMicroseconds(1700); 
 servoRight.writeMicroseconds(1700); 
 delay(800.6); 
 servoLeft.writeMicroseconds(1700); 
 servoRight.writeMicroseconds(1300); 
 delay(4900); 
  servoLeft.writeMicroseconds(1700); 
 servoRight.writeMicroseconds(1700); 
 delay(900.6); 
 servoLeft.writeMicroseconds(1700); 
 servoRight.writeMicroseconds(1300); 
 delay(4900); 
 servoLeft.detach(); // Stop servo signal to pin 13
 servoRight.detach(); // Stop servo signal to pin 12 
}

void loop() {
  // put your main code here, to run repeatedly:

}
