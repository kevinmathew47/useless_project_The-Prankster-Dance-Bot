#include <Servo.h>   // Default Servo library for Arduino

const int irPin = 7;      // IR sensor connected to digital pin 7
Servo danceServo;         // Create a Servo object

void setup() {
  Serial.begin(9600);
  pinMode(irPin, INPUT);   // Set IR sensor pin as input
  danceServo.attach(9);    // Attach the servo to digital pin 9



}

void loop() {
  // Read the IR sensor data
  int motion = digitalRead(irPin);  
  if (motion == LOW) {  // If motion is detected
    Serial.println("Motion detected! Starting dance sequence...");
    performDance();      // Call the function to make the servo dance
    delay(2000);         // Cooldown period before detecting motion again
  }
  delay(100);            // Small delay for sensor stability
}

void performDance() {
  // Dance move 1: Left-Right Swing
  for (int pos = 0; pos <= 90; pos += 10) {
    danceServo.write(pos);  // Move servo to position
    delay(50);
  }
  for (int pos = 90; pos >= 0; pos -= 10) {
    danceServo.write(pos);
    delay(50);
  }

  // Dance move 2: Up-Down Nod
  for (int pos = 0; pos <= 180; pos += 15) {
    danceServo.write(pos);
    delay(50);
  }
  for (int pos = 180; pos >= 0; pos -= 15) {
    danceServo.write(pos);
    delay(50);
  }

  // Dance move 3: Random Shake
  danceServo.write(45);
  delay(200);
  danceServo.write(135);
  delay(90);
  danceServo.write(200);  // Return to neutral position
}
