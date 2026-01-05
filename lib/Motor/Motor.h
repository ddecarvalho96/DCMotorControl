#pragma once
#include <stdint.h>

/**
 * Motor class to control a DC motor connected to a digital pin.
*/
class Motor {
public:
    explicit Motor(uint8_t pin); 
    void init();

    void on();
    void off();
    void setSpeed(uint8_t speed); // speed: 0-255, for PWM control
private:
    uint8_t pin_;
};
