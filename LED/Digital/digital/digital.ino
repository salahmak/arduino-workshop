const int led = 13;

void setup() {
  // initialize pin 13 (connected to LED) as output
  pinMode(led, OUTPUT);
}

void loop() {
  // Turn the LED on
  // (by setting a high voltage value to pin 13)
  digitalWrite(led, HIGH);

  // pausing execution for 500ms
  delay(500);

  // TUrn the LED off
  // (by setting a LOW voltage value to pin 13)
  digitalWrite(led, LOW);

  // pausing execution for 500ms
  delay(500);
}
