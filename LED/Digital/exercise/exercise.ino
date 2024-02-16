const int led1 = 13;
const int led2 = 9;

void setup() {
  // initialize pin 13 and 9 as outputs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // turn on led 1 and turn off led 2
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);

  // pausing execution for 500ms
  delay(500);

  // turn off led 1 and turn on led 2
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);

  // pausing execution for 500ms
  delay(500);
}
