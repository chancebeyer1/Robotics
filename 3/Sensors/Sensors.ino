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
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(7, INPUT);
  go();

}

void loop() {
  // put your main code here, to run repeatedly:
  int leftwhisker = digitalRead(7);
  int rightwhisker = digitalRead(5);
// Delay is to give enough time to detect if it is both whiskers or not
  delay(150);

// No whiskers are touching so it continually drives straight
  if((leftwhisker == 1) && (rightwhisker == 1))
  {
    drive(200, 125);
  }
// Left is touching it moves backward for one sec and then moves right
  else if ((leftwhisker == 0) && (rightwhisker == 1))
  {
    drive(-200, -125);
    delay(1000);
    drive(200, -125);
    delay(1000);
  }
  // Right is touching it moves backward for one sec and then moves left
  else if ((leftwhisker == 1) && (rightwhisker == 0))
  {
    drive(-200, -125);
    delay(1000);
    drive(-200, 125);
    delay(1000);
  }
  // Both are touching so it moves backward for a sec then 
  // does a 180 degree turn and contiunes forward
  else 
  {
    drive(-200, -125);
    delay(1000);
    drive(-200, 125);
    delay(1500);
  }
//  Serial.print(leftwhisker);
//  Serial.print(" ");
//  Serial.print(rightwhisker);
//  Serial.println();
//  delay(100);
  

}
