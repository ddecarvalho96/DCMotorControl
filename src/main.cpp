#include <Arduino.h>
#include "Config.h"
#include "Motor.h"
#include "Potentiometer.h"

//Create hardware objects using C++ classes
Motor motor(MOTOR_PIN);
Potentiometer potentiometer(POTENTIOMETER_PIN);
/** 
 * Setup function runs once at startup 
 * - Initializes Serial monitoring
 * - Initializes pins for Button and Motor
*/
void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  motor.init();
  potentiometer.init();
}

/** 
 * Potentiometer value is read and mapped to PWM range (0-255)
 * Motor speed is adjusted based on potentiometer reading
 * Serial monitor outputs the current PWM value
*/
void loop() {
  int potValue = potentiometer.readValue();
  uint8_t pwm = map(potValue, 0, 1023, 0, 255);

  motor.setSpeed(pwm);

  Serial.print("Motor PWM: ");
  Serial.println(pwm);

  delay(200);
}