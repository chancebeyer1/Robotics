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
  for(int i = 20;i<55;i++)
  {
    drive(200, i);
    delay(1000);
  }
  drive(200,55);
  delay(10000);
  
  stop();
}

void loop() {
  
}
