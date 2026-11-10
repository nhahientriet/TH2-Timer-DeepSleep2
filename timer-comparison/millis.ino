#define LED 2

unsigned long previous = 0;
bool state = false;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {

  if (millis() - previous >= 1000) {
    previous = millis();

    state = !state;

    digitalWrite(LED, state);
  }
}
