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
  drive(200, 30);
  delay(11000);
  drive(200,112);
  delay(2300);
  drive(27, 200);
  delay(12000);
  drive(200,112);
  delay(2800);

  stop();
}

void loop() {
  
}
