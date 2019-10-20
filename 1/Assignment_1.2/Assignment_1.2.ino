void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);


}

void light1() {
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}
void light2() {
  digitalWrite(12,HIGH);
  delay(250);
  digitalWrite(12,LOW);
  delay(250);
}

void loop() {
  tone(11, 1000, 1000);
  delay(1000);
  light1();
  light1();
  light1();
  light1();
  light1();
  tone(11, 2000, 1000);
  delay(1000);
  light2();
  light2();
  light2();
  light2();
  light2();

}
