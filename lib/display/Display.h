#pragma once
#include <Arduino.h>
#include <LiquidCrystal.h>

class Display {
public:
  Display();
  void begin();
  void showValues(int v1, int v2, int v3, int v4, int v5);
private:
  // LCD pins (matches original sketch)
  const int rs = 16;
  const int en = 17;
  const int d4 = 18;
  const int d5 = 19;
  const int d6 = 5;
  const int d7 = 21;
  LiquidCrystal lcd{rs, en, d4, d5, d6, d7};
};
