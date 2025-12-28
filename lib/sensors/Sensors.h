#pragma once
#include <Arduino.h>

class Sensors {
public:
  Sensors();
  void begin();
  void readPots(int out[5]);
private:
  // analog pins used by original sketch
  const int pins[5] = {25, 32, 33, 35, 34};
};
