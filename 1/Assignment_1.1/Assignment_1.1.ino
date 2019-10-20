void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(250);
  digitalWrite(12,LOW);
  delay(250);

}
