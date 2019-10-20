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

void reverse()
{
  drive(-150, -140);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(7, INPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  go();

}

void loop() {
  // put your main code here, to run repeatedly:
  int leftwhisker = digitalRead(5);
  int rightwhisker = digitalRead(7);

  if (rightwhisker == 0)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
  if (leftwhisker == 0)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
 
  if((leftwhisker == 1) && (rightwhisker == 1))
  {
    drive(200, 80);
  }
    else if ((leftwhisker == 0) && (rightwhisker == 1))
  {
    drive(-100, 125);
    delay(150);
  }
  // Both are touching so it moves backward for half sec then
  // does a 90 degree turn and contiunes forward
  else if((leftwhisker == 0) && (rightwhisker == 0))
  {
    reverse();
    delay(100);
    digitalWrite(8,LOW);
    digitalWrite(3,LOW);
    delay(1800);
    drive(30, 200);
    delay(3575);
  }
  //  Serial.print(leftwhisker);
  //  Serial.print(" ");
  //  Serial.print(rightwhisker);
  //  Serial.println();
  //  delay(100);


}
