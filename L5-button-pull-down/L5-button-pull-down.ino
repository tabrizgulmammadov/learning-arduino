# define led 3
# define button 2


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int value = digitalRead(button);
  Serial.println(value);
  
  if (value == 1) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  
  delay(500);
}