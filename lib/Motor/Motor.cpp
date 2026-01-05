#include "Motor.h"
#include <Arduino.h>

// Constructor to initialize motor with specified pin
Motor::Motor(uint8_t pin) : pin_(pin) {}

// Initialize the motor pin as OUTPUT
void Motor::init() {
    pinMode(pin_, OUTPUT);
}

void Motor::on() {
    setSpeed(255); // Full speed
}

// Turn the motor off by setting the pin LOW
void Motor::off() {
    setSpeed(0);
}

// Set motor speed using PWM (0-255)
void Motor::setSpeed(uint8_t speed) {
    analogWrite(pin_, speed);
}   