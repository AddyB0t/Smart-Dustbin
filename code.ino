#include <Servo.h>
 
Servo servoMotor; 
const int trigPin = 9;
const int echoPin = 8;
long duration;
int distance;

void setup() {
  servoMotor.attach(3); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  servoMotor.write(0); // Initially close the dustbin
  Serial.begin(9600);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
 
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the echoPin
  duration = pulseIn(echoPin, HIGH);
 
  // Calculate the distance
  distance = duration * 0.034 / 2;
 
  // Check if an object is within range (e.g., 20 cm)
  if (distance <= 20) {
    servoMotor.write(90); // Open the lid
    delay(2000); // Wait for 2 seconds
    servoMotor.write(0); // Close the lid
  }
 
  delay(100); // Small delay before next reading
}
