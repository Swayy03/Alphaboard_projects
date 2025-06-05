//Cool project controlling servo motors with the 2 on_board potentiometers


#include <Servo.h>

Servo servo1;  // First servo motor
Servo servo2;  // Second servo motor

const int pot1Pin = A1; // Potentiometer 1
const int pot2Pin = A2; // Potentiometer 2

void setup() {
  servo1.attach(5);   // Connect servo1 to pin 9
  servo2.attach(6);  // Connect servo2 to pin 10
}

void loop() {
  int pot1Value = analogRead(pot1Pin);  // Read value from potentiometer 1 (0–1023)
  int pot2Value = analogRead(pot2Pin);  // Read value from potentiometer 2

  int angle1 = map(pot1Value, 0, 1023, 0, 180); // Map to servo angle
  int angle2 = map(pot2Value, 0, 1023, 0, 180);

  servo1.write(angle1);  // Move servo 1
  servo2.write(angle2);  // Move servo 2

  delay(10); // Short delay for servo stability
}
