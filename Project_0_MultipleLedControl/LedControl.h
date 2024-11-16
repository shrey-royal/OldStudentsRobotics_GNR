#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#define MAX_LEDS 10 // Define the maximum number of LEDs

class LedControl {
public:
    LedControl(); // Constructor
    void setupLeds(int numLeds, int *ledPinsArray); // Setup LEDs
    void turnOn(int ledIndex); // Turn on LED
    void turnOff(int ledIndex); // Turn off LED
    ~LedControl(); //Destructor

private:
    int *ledPins; // Pointer to LED pins array
    int numberOfLeds; // Number of LEDs
};

#endif
