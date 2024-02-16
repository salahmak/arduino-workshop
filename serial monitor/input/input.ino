const int led = 9;

void setup() {
  // initializing the Serial Monitor 
  Serial.begin(9600);
  pinMode(led, OUTPUT); // set the digital pin as output:
}

void loop() {

  if(Serial.available()) // if there is data comming
  {
    String command = Serial.readString(); // read string until meet newline character

    if(command == "ON")
    {
      digitalWrite(led, HIGH); // turn on LED
      Serial.println("LED is turned ON"); // send action to Serial Monitor
    }
    else
    if(command == "OFF")
    {
      digitalWrite(led, LOW);  // turn off LED
      Serial.println("LED is turned OFF"); // send action to Serial Monitor
    }
  }
}
