const int LDR_PIN    = A0;
const int LASER_PIN  = 7;
const int BUZZER_PIN = 8;
const int THRESHOLD  = 500;

bool armed = false;

void setup() {
  pinMode(LASER_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(LASER_PIN, HIGH);
  Serial.begin(9600);
  Serial.println("Lazeri qebulediciye tusur...");
}

void loop() {
  int value = analogRead(LDR_PIN);
  bool beamOk = value > THRESHOLD;

  if (!armed && beamOk) {
    armed = true;
    Serial.println("Sistem aktivdir");
  }

  if (armed && !beamOk) {
    tone(BUZZER_PIN, 1000);
    Serial.print(value);
    Serial.println("  MANEƏ!");
  } else {
    noTone(BUZZER_PIN);
  }

  delay(50);
}
