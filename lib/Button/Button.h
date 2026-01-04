# pragma once

/** 
 * Button class to control a button connected to a digital pin. 
*/
class Button
{

public:
    explicit Button(int pin);
    void init();
    bool isPressed() const;
private:
    int _pin;
};
