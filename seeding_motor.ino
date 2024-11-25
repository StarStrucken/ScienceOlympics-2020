// Define motor control pins
const int motorPin1 = 9; // Motor driver IN1
const int motorPin2 = 10; // Motor driver IN2

void setup() {
  // Set motor control pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Initial motor state (off)
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
}

void loop() {
  // Turn on the motor (adjust the direction as needed)
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);

  // Keep the motor running for a short time (adjust for dispensing duration)
  delay(1000); // Motor on for 1 second

  // Turn off the motor
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);

  // Wait for 6 seconds before the next dispensing
  delay(6000);
}
