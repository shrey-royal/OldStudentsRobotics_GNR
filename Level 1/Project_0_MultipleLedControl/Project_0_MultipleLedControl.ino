#include "LedControl.h"

// Global instance of LedControl class
LedControl ledControl;
bool flag = 0;

void setup() {
    Serial.begin(9600); // Initialize Serial communication
    Serial.println("Enter the number of LEDs followed by their pin numbers:");
    Serial.println("Example: <space>3 5 6 7 (for 3 LEDs on pins 5, 6, and 7)");
    flag = 1;
}

void loop() {
    // Check for user input
    if (Serial.available() && flag) {
      flag = 0;
        // Read the number of LEDs
        int numberOfLeds = Serial.parseInt();
        if (numberOfLeds <= 0 || numberOfLeds > MAX_LEDS) {
            Serial.println("Invalid number of LEDs. Please enter a number between 1 and 10.");
            return;
        }

        // Allocate array dynamically for LED pins
        int *ledPinsArray = new int[numberOfLeds];
        for (int i = 0; i < numberOfLeds; i++) {
            ledPinsArray[i] = Serial.parseInt();
            // Serial.println(ledPinsArray[i]);
        }

        // Setup LEDs
        ledControl.setupLeds(numberOfLeds, ledPinsArray);
        delete[] ledPinsArray; // Clean up temporary array

        Serial.println("Setup Complete. Enter commands to control the LEDs:");
        Serial.println("Format: on <ledIndex> or off <ledIndex>");
    }

    // Handle commands to turn LEDs on or off
    if (Serial.available() > 0) {
        String command = Serial.readStringUntil(' ');
        int ledIndex = Serial.parseInt();

        if (command == "on") {
            ledControl.turnOn(ledIndex);
        } else if (command == "off") {
            ledControl.turnOff(ledIndex);
        } else {
            Serial.println("Invalid command. Use 'on' or 'off'.");
        }
    }
}
