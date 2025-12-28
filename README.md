ESP32 Remote Wristband

Overview
-
This repository contains an ESP32-based wristband project that displays potentiometer values received via Bluetooth. The wristband is intended as a small wearable display and controller for remote devices (for example, a Node32s or another ESP32).

Features
-
- Real-time potentiometer value display on a small LCD.
- Bluetooth communication using BluetoothSerial.
- Example transmitter/receiver sketches for ESP32.

Repository layout
-
- `Ardunio sketch/` — Original Arduino sketches (kept for reference).
- `src/` — PlatformIO-style source directory (contains `main.ino`).
- `platformio.ini` — Configuration to build the project with PlatformIO.
- `3d files/`, `Circuit Diagram/` — mechanical and wiring assets.

Quick start (PlatformIO)
-
1. Install PlatformIO in Visual Studio Code: https://platformio.org/install
2. Open the repository folder in VS Code.
3. Select the `esp32dev` environment and build/upload using PlatformIO.

Hardware wiring (high level)
-
- LCD in 4-bit mode wired to the pins defined in `src/main.ino`.
- Potentiometers connected to analog-capable GPIOs (example uses 25, 32, 33, 34, 35).
- A push button connected to GPIO 26 (internal pull-up enabled in the code).

Development notes and next steps
-
- The original Arduino sketches are preserved in `Ardunio sketch/` for reference.
- To modernize further, split functionality into modules/libraries under `lib/`:
  - `bt/` (Bluetooth handling)
  - `display/` (LCD wrapper)
  - `sensors/` (potentiometer reading + debouncing)
- Add CI to build the PlatformIO project on each push (GitHub Actions example).

Troubleshooting
-
If you encounter issues on Node32s or similar boards, see this issue for context:
https://github.com/SentryCoderDev/Node32s-BT_Wristband/issues/1

License
-
See the `LICENSE` file in the repository root for licensing details.
