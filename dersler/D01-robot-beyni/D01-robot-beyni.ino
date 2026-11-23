// Dərs 1: Robot beyni — L işığı yanıb-sönür
// setup() bir dəfə işləyir. loop() dayanmadan təkrarlanır.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);    // Hazırlıq: L işığının pini (13) çıxış olsun
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // L işığını yandır (HIGH = 1 = 5 V)
  delay(1000);                     // Gözlə: 1000 ms = 1 saniyə
  digitalWrite(LED_BUILTIN, LOW);  // L işığını söndür (LOW = 0 = 0 V)
  delay(1000);                     // Gözlə: 1 saniyə
}
