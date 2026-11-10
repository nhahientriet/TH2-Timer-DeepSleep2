hw_timer_t *timer = NULL;

volatile bool ledState = false;

#define LED 2

void IRAM_ATTR onTimer() {
  ledState = !ledState;
  digitalWrite(LED, ledState);
}

void setup() {

  pinMode(LED, OUTPUT);

  timer = timerBegin(0, 80, true);

  timerAttachInterrupt(timer, &onTimer, true);

  timerAlarmWrite(timer, 1000000, true);

  timerAlarmEnable(timer);
}

void loop() {
}
