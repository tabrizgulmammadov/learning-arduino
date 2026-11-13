const int LED_PIN = 8;

void setup() {
  pinMode(LED_PIN, OUTPUT); // Configure the LED pin as an output (runs once)
  Serial.begin(115200);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn the LED on (pin = 5 V)
  Serial.println("LED: ON");
  delay(1000);

  digitalWrite(LED_PIN, LOW);  // Turn the LED off (pin = 0 V)
  Serial.println("LED: OFF");
  delay(1000);
}