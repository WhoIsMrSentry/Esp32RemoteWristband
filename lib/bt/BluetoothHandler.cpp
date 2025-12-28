#include "BluetoothHandler.h"

BluetoothHandler::BluetoothHandler() {}

void BluetoothHandler::begin(const char* name) {
  SerialBT.begin(name);
}

bool BluetoothHandler::hasClient() {
  return SerialBT.hasClient();
}

void BluetoothHandler::sendValues(int v1, int v2, int v3, int v4, int v5) {
  SerialBT.printf("k1: %d, k2: %d, k3: %d, k4: %d, k5: %d\n", v1, v2, v3, v4, v5);
}
