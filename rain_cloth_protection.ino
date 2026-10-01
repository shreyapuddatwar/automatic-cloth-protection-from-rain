// Define the pins
const int rainSensorPin = A0;
const int motorForwardPin = 3;
const int motorReversePin = 4;

bool previousSensorState = LOW;

void setup() {
  pinMode(rainSensorPin, INPUT);
  pinMode(motorForwardPin, OUTPUT);
  pinMode(motorReversePin, OUTPUT);

  digitalWrite(motorForwardPin, LOW);
  digitalWrite(motorReversePin, LOW);
}

void loop() {
  int currentSensorState = digitalRead(rainSensorPin);

  if (currentSensorState == HIGH && previousSensorState == LOW) {
    // Rain starts
    digitalWrite(motorForwardPin, HIGH);
    delay(2000);
    digitalWrite(motorForwardPin, LOW);
  }
  else if (currentSensorState == LOW && previousSensorState == HIGH) {
    // Rain stops
    digitalWrite(motorReversePin, HIGH);
    delay(2000);
    digitalWrite(motorReversePin, LOW);
  }

  previousSensorState = currentSensorState;
}
