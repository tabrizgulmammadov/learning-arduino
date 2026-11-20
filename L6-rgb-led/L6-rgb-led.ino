#define red   6
#define green 3
#define blue  5

#define potRed   A0
#define potBlue  A1
#define potGreen A2

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // analogRead: 0–1023, analogWrite: 0–255 → 4-ə bölürük
  analogWrite(red,   analogRead(potRed)   / 4);
  analogWrite(green, analogRead(potGreen) / 4);
  analogWrite(blue,  analogRead(potBlue)  / 4);
}
