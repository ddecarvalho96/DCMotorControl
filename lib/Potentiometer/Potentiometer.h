#pragma once
#include <stdint.h>

/** 
 * Potentiometer class to control a potentiometer connected to an analog pin. 
*/
class Potentiometer {
public:
    explicit Potentiometer(uint8_t pin);
    void init();
    int readValue() const; // Returns the analog value (0-1023)
    
private:
    uint8_t _pin;
};