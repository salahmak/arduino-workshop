const int led = 11;

void setup() {
  // initialize the pins
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, 30);
}

