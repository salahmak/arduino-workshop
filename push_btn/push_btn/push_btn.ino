const int led = 9;
const int btn = 2;

void setup()
{
  pinMode(led, OUTPUT);

  // we use INPUT_PULLUP  to use...
  // ...the builtin pull up resistance
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  // we use digitalRead() to read input from a pin
  // returns either 0 or 1 (LOW or HIGH)
  int btnNotPressed = digitalRead(btn);
  
  digitalWrite(led, btnNotPressed);
}
