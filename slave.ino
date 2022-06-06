char input;

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
  if (Serial.available())
  {
    input = Serial.read();
    Serial.println(input);
    Serial.println('k');
  }

  if (input == 'f')
  {
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);

    Serial.println('f');
  }

  else if (input == 'b')
  {
    digitalWrite(8, HIGH);
    digitalWrite(10, HIGH);
    Serial.println('b');
  }

  else if (input == 'l')
  {
    Serial.println('l');
    digitalWrite(7, HIGH);

  }

  else if (input == 'r')
  {
    digitalWrite(9, HIGH);
    Serial.println('r');
  }

  else if (input == 's')
  {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
  
  delay(500);
}
