#pragma once

/**
 * Motor class to control a DC motor connected to a digital pin.
*/
class Motor {
public:
    explicit Motor(int pin);
    void init();
    void on();
    void off();
private:
    int pin_;
};
