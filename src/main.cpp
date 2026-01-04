#include <Arduino.h>
#include "Config.h"
#include "Button.h"
#include "Motor.h"

//Create hardware objects using C++ classes
Button button(SWITCH_PIN); 
Motor motor(MOTOR_PIN);

/** 
 * Setup function runs once at startup 
 * - Initializes Serial monitoring
 * - Initializes pins for Button and Motor
*/
void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  button.init(); 
  motor.init();
}

/** 
 * Loop function runs continuously after setup
 * - Checks Button state
 * - Turns Motor on/off based on Button state
 * - Prints Motor state to Serial monitor
*/
void loop() {
  if (button.isPressed()) {
    motor.on();
    Serial.println("Motor is ON");
  } else {
    motor.off();
    Serial.println("Motor is OFF");
  }

// Add a small delay to avoid overwhelming the Serial monitor.
  delay(500);
}