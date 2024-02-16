const int btn = 2;

void setup() {
  // initializing the Serial Monitor at baud rate 9600 (speed)
  Serial.begin(9600);

  pinMode(btn, INPUT_PULLUP);
}

void loop() {
  int btnValue = digitalRead(btn);

  // printing the button input value in the serial monitor's console
  Serial.println(btnValue);

  delay(500);
}