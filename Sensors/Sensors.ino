void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(7, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int leftwhisker = digitalRead(7);
  int rightwhisker = digitalRead(5);

  if((leftwhisker == 1) && (rightwhisker == 1))
  {
    
  }
  else if ((leftwhisker == 0) && (rightwhisker == 1))
  {
    
  }
  else if ((leftwhisker == 1) && (rightwhisker == 0))
  {
    
  }
  else 
  {
    
  }
  Serial.print(leftwhisker);
  Serial.print(" ");
  Serial.print(rightwhisker);
  Serial.println();
  delay(100);
  

}
