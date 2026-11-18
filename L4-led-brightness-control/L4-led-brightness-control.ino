#define potentiometer A1
#define redLed 3

void setup()
{
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
}

void loop()
{
  int raw = analogRead(potentiometer);          // 0..1023
  int brightness = map(raw, 0, 1023, 0, 255);   // 0..255
  analogWrite(redLed, brightness);
  Serial.println(brightness);
  delay(20);
}