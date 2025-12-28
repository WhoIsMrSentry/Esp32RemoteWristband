#pragma once
#include <Arduino.h>
#include <BluetoothSerial.h>

class BluetoothHandler {
public:
  BluetoothHandler();
  void begin(const char* name);
  bool hasClient();
  void sendValues(int v1, int v2, int v3, int v4, int v5);
private:
  BluetoothSerial SerialBT;
};
