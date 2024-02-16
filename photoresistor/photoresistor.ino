const int led = 9;
const int photoresistor = A0;

void setup()
{
  // setting the LED as output
  pinMode(led, OUTPUT);

  // setting the phototransistor pin as an input
  pinMode(photoresistor, INPUT);
}

void loop()
{
  // reading the analog value of the light captured by the phototransistor
  // the darker it is, the higher this value gets
  // between 0 and 1024
  int lightValue = analogRead(Analog_pin_number);

  if(lightValue > 300)  // you can experiment with this value to find the best one
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  
  delay(500);
}
