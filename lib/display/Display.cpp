#include "Display.h"

Display::Display() {}

void Display::begin() {
  lcd.begin(16, 2);
}

void Display::showValues(int v1, int v2, int v3, int v4, int v5) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("k"); lcd.print(v1);
  lcd.print(" "); lcd.print(v2);
  lcd.print(" "); lcd.print("k"); lcd.print(v3);

  lcd.setCursor(0, 1);
  lcd.print("k"); lcd.print(v4);
  lcd.print(" "); lcd.print("send");
  lcd.print(" "); lcd.print("k"); lcd.print(v5);
}
