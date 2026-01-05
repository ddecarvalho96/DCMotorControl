#include "Potentiometer.h"
#include <Arduino.h>

// Constructor to initialize potentiometer with specified pin
Potentiometer::Potentiometer(uint8_t pin) : _pin(pin) {}

// Initialize the potentiometer pin as INPUT
void Potentiometer::init() {
    pinMode(_pin, INPUT);
}

// Check if the potentiometer value is read
int Potentiometer::readValue() const {
    return analogRead(_pin);
}