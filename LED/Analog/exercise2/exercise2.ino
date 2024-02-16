const int led = 6;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 255; i++) {
  	analogWrite(led, i);
    delay(5);
  }
  
  for(int i = 255; i >= 0; i--) {
  	analogWrite(led, i);
    delay(5);
  }
}