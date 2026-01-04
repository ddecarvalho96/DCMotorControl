#include "Button.h"
#include <Arduino.h>

// Constructor to initialize button with specified pin
Button::Button(int pin) : _pin(pin) {}

// Initialize the button pin as INPUT
void Button::init() {
    pinMode(_pin, INPUT);
}

// Check if the button is pressed (HIGH)
bool Button::isPressed() const {
    return digitalRead(_pin) == HIGH;
}