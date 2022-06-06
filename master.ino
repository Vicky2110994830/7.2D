void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);

  Serial.begin(9600);
}


void loop()
{
  Serial.println("f");
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(2000);

  Serial.println("s");
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  delay(500);

  Serial.println("l");
  digitalWrite(7, HIGH);
  delay(2000);

  Serial.println("s");
  digitalWrite(7, LOW);
  delay(500);

  Serial.println("b");
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(2000);

  Serial.println("s");
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(500);

  Serial.println("r");
  digitalWrite(9, HIGH);
  delay(2000);

  Serial.println("s");
  digitalWrite(9, LOW);
  delay(500);

}
