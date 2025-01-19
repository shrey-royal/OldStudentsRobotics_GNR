#include "LedControl.h"
#include <Arduino.h>

LedControl::LedControl() {
    ledPins = nullptr;
    numberOfLeds = 0;
}

void LedControl::setupLeds(int numLeds, int *ledPinsArray) {
    numberOfLeds = numLeds;
    // Allocate memory for ledPins
    ledPins = new int[numberOfLeds];
    
    // Copy pin numbers to the ledPins array
    for (int i = 0; i < numberOfLeds; i++) {
        ledPins[i] = ledPinsArray[i];
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LOW); // Initialize all LEDs to OFF
    }
}

void LedControl::turnOn(int ledIndex) {
    if (ledIndex >= 0 && ledIndex < numberOfLeds) {
        digitalWrite(ledPins[ledIndex], HIGH);
        Serial.print("LED ");
        Serial.print(ledIndex);
        Serial.println(" turned ON.");
    } else {
        Serial.println("Invalid LED index.");
    }
}

void LedControl::turnOff(int ledIndex) {
    if (ledIndex >= 0 && ledIndex < numberOfLeds) {
        digitalWrite(ledPins[ledIndex], LOW);
        Serial.print("LED ");
        Serial.print(ledIndex);
        Serial.println(" turned OFF.");
    } else {
        Serial.println("Invalid LED index.");
    }
}

// Destructor to clean up memory (good practice)
LedControl::~LedControl() {
    if (ledPins != nullptr) {
        delete[] ledPins;
    }
}
