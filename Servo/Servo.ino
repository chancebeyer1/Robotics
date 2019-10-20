#include <Servo.h>

Servo leftServo;
Servo rightServo;

void setup() {
  // put your setup code here, to run once:
  leftServo.attach(13);
  rightServo.attach(12);

  leftServo.writeMicroseconds(1400);
  rightServo.writeMicroseconds(1600);
  delay(1000);

  leftServo.writeMicroseconds(1550);
  rightServo.writeMicroseconds(1550);
  delay(1000);

  leftServo.writeMicroseconds(1400);
  rightServo.writeMicroseconds(1600);
  delay(1000);

  leftServo.detach();
  rightServo.detach();

}

void loop() {
  // put your main code here, to run repeatedly:
  leftServo.attach(13);
  rightServo.attach(12);

  leftServo.writeMicroseconds(1400);
  rightServo.writeMicroseconds(1600);
  delay(1000);

  leftServo.writeMicroseconds(1550);
  rightServo.writeMicroseconds(1550);
  delay(1000);

  leftServo.writeMicroseconds(1400);
  rightServo.writeMicroseconds(1600);
  delay(1000);
}
