void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int left = analogRead(A3);
Serial.print(left);
int LSpeed = map(left, 0, 1023, 0, 200)
Serial.print("  ");
Serial.print(LSpeed);
Serial.println();
delay(100);
}
