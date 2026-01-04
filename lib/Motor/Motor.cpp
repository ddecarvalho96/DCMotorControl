#include "Motor.h"
#include <Arduino.h>

// Constructor to initialize motor with specified pin
Motor::Motor(int pin) : pin_(pin) {}

// Initialize the motor pin as OUTPUT
void Motor::init() {
    pinMode(pin_, OUTPUT);
}

// Turn the motor on by setting the pin HIGH
void Motor::on() {
    digitalWrite(pin_, HIGH);
}

// Turn the motor off by setting the pin LOW
void Motor::off() {
    digitalWrite(pin_, LOW);
}