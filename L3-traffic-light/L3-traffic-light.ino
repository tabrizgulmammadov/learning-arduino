const int RED_LED_PIN = 11;
const int YELLOW_LED_PIN = 12;
const int GREEN_LED_PIN = 13;

const int RED_SEC = 5;
const int YELLOW_SEC = 3;
const int GREEN_SEC = 4;

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightFor(RED_LED_PIN, "Red", RED_SEC);
  blinkFor(YELLOW_LED_PIN, "Yellow", YELLOW_SEC);
  lightFor(GREEN_LED_PIN, "Green", GREEN_SEC);
}

void lightFor(int pin, const char* name, int seconds) {
  digitalWrite(pin, HIGH);
  Serial.print(name);
  Serial.println(" LED: ON");

  for (int s = seconds; s > 0; s--) {
    Serial.println(s);
    delay(1000);
  }

  digitalWrite(pin, LOW);
  Serial.print(name);
  Serial.println(" LED: OFF");
}

void blinkFor(int pin, const char* name, int seconds) {
  Serial.print(name);
  Serial.println(" LED: BLINKING");

  for (int s = seconds; s > 0; s--) {
    Serial.println(s);

    digitalWrite(pin, HIGH);
    delay(500);

    digitalWrite(pin, LOW);
    delay(500);
  }

  Serial.print(name);
  Serial.println(" LED: OFF");
}