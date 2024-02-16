const int led1 = 10;
const int led2 = 11;
const int led3 = 12;

const int btn = 2;

int count = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(btn, INPUT_PULLUP);  // Add internal pull-up resistor for the button
}

void loop() {
  int btnValue = digitalRead(btn);

  if (btnValue == LOW) {  // Check for button press (LOW signal due to pull-up)
    count++;
    count %= 8;  // Ensure count stays within 0-7 (wrap around)
  }

  // Set LEDs based on binary representation of count:
  digitalWrite(led1, (count & 0x04) >> 2);  // Check bit 2 (16 in decimal)
  digitalWrite(led2, (count & 0x02) >> 1);  // Check bit 1 (8 in decimal)
  digitalWrite(led3, count & 0x01);        // Check bit 0 (1 in decimal)

  delay(300);  // Optional delay between counter increments
}