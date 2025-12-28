#include <Arduino.h>
#include "Display.h"
#include "BluetoothHandler.h"
#include "Sensors.h"

const int buttonPin = 26; // Digital Pin 26, button pin
bool sendData = false; // Flag to use for sending data

Display display;
BluetoothHandler bt;
Sensors sensors;

void setup() {
  Serial.begin(115200);
  bt.begin("SentryESP32");

  sensors.begin();
  display.begin();

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int pots[5] = {0};
  sensors.readPots(pots);

  display.showValues(pots[0], pots[1], pots[2], pots[3], pots[4]);

  if (bt.hasClient() && digitalRead(buttonPin) == LOW) {
    bt.sendValues(pots[0], pots[1], pots[2], pots[3], pots[4]);
    sendData = true;
  }

  if (sendData && digitalRead(buttonPin) == HIGH) {
    sendData = false;
  }

  delay(150);
}
