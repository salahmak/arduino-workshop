#define trigPin1 12
#define echoPin1 11
#define buzzerPin1 13

void setup()
{
  pinMode(trigPin1, OUTPUT); 
  pinMode(echoPin1, INPUT);
  pinMode(buzzerPin1, OUTPUT); 
}

void loop() {
  runRadarSystem(echoPin1, trigPin1,buzzerPin1);
}

long getDistance(int echo, int trigger)
{
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  long duration = pulseIn(echo, HIGH);
 
  long distance = (duration/2) * 0.0343;

  return distance;
}

void runRadarSystem(int echo, int trigger, int buzzer){

  long distance = getDistance(echo, trigger);
 
  // if the distance is too large or too low, we don't beep
  if (distance >= 200 || distance <= 0){
    return;
  }

  // turning on the buzzer for 25ms for a small beep
  digitalWrite(buzzer, HIGH);
  delay(25);
  digitalWrite(buzzer, LOW);
  
  // the higher the distance gets, the bigger the gap is between two beeps
	delay(distance*10);
}