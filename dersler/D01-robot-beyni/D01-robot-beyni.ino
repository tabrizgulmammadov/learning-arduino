// Dərs 1: Robot beyni — L işığı yanıb-sönür
// setup() bir dəfə işləyir. loop() dayanmadan təkrarlanır.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);    // Hazırlıq: L işığının ayağı çıxış olsun
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // L işığını yandır
  delay(1000);                     // Gözlə: 1000 ms = 1 saniyə
  digitalWrite(LED_BUILTIN, LOW);  // L işığını söndür
  delay(1000);                     // Gözlə: 1 saniyə
}
