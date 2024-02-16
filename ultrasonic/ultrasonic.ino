const int trigPin = 13;
const int echoPin = 12;

void setup()
{ 
    // setting the trigger pin as output
    pinMode(trigPin, OUTPUT);

    // setting the eho pin as input
    pinMode(echoPin, INPUT);

    // initializing the serial monitor with baud rate 9600
    Serial.begin(9600);
}

void loop()
{
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  int duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  int distance_cm = (duration / 2) * 0.0343;

  // Prints the distance on the Serial Monitor
  Serial.print("Distance(cm): ");
  Serial.println(distance_cm);

  delay(300); 
}


