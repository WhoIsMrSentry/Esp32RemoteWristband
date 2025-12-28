#include "Sensors.h"

Sensors::Sensors() {}

void Sensors::begin() {
  for (int i = 0; i < 5; ++i) {
    pinMode(pins[i], INPUT);
  }
}

void Sensors::readPots(int out[5]) {
  // Read in the same order as original sketch
  out[0] = analogRead(pins[0]);
  out[1] = analogRead(pins[1]);
  out[2] = analogRead(pins[2]);
  out[3] = analogRead(pins[3]);
  out[4] = analogRead(pins[4]);
}
