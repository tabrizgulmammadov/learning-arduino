int x = 5;
int y = 6;

void setup() {
  Serial.begin(115200);

  Serial.println("Hello World");

  Serial.println();

  Serial.println("x=" + String(x));
  Serial.println("y=" + String(y));

  Serial.println();

  Serial.println("1. IF condition");

  if (x > y) {
    Serial.println("x y-dən böyükdür.");
  } else {
    Serial.println("y x-dən böyükdür.");
  }

  Serial.println();

  Serial.println("2. While loop");

  while (x < 10) {
    Serial.println(x);
    x++;
  }
}

void loop() {
}
