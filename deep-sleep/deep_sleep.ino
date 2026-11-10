#define uS_TO_S_FACTOR 1000000ULL

void setup() {

  Serial.begin(115200);

  esp_sleep_enable_timer_wakeup(
      10 * uS_TO_S_FACTOR);

  Serial.println("Sleep 10s");

  delay(100);

  esp_deep_sleep_start();
}

void loop() {
}
