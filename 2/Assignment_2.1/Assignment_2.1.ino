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
  leftServo.detach();
  rightServo.detach();
}
void drive(int left, int right)
{
  leftServo.writeMicroseconds(1500 - left);
  rightServo.writeMicroseconds(1500 + right);
}

void setup() {
  // put your setup code here, to run once:
  go();
delay(2000);
  drive(200, 135);
  delay(19000);

  stop();
}

void loop() {
  
}
