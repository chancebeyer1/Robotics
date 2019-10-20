#include <Servo.h>

Servo leftServo;
Servo rightServo;

void go()
{
  leftServo.attach(13);
  rightServo.attach(12);
}

void stop()
{
  leftServo.detach(13);
  rightServo.detach(12);
}
void drive(int left, int right)
{
  leftServo.writeMicroseconds(1500 + left);
  rightServo.writeMicroseconds(1500 - right);
}

void setup() {
  // put your setup code here, to run once:
  leftServo.attach(13);
  rightServo.attach(12);

  leftServo.writeMicroseconds(1500);
  rightServo.writeMicroseconds(1300);
  delay(1500);
  leftServo.detach();
  rightServo.detach();

}

void loop() {
  
}
