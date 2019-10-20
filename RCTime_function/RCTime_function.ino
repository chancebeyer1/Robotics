void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

long rcTime(int pin)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(1);

  pinMode(pin, INPUT);
  digitalWrite(pin, LOW);
  long time = micros();
  while(digitalRead(pin) != 0);
  time = micros() - time;
  return time;
}

void loop() {
  // put your main code here, to run repeatedly:

//long resistor = rcTime(6);
//Serial.print("resistor = ");
//Serial.print(resistor);
//Serial.print(" us");
//Serial.print("\t");

long Transistor = rcTime(5);
Serial.print("Transistor = ");
Serial.print(Transistor);
Serial.println(" us");

delay(100);

}
