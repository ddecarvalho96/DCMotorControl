# DCMotorControl v2 – PWM Motor Control via Potentiometer

A variable-speed DC motor firmware written in C++ using PlatformIO, controlled via a potentiometer.

## Hardware
- Arduino UNO R3
- DC Motor
- 10 kΩ Potentiometer
- Diode (1N4007)
- MOSFET (IRF520)

## Features
- Motor speed controlled via potentiometer (analog input → PWM)
- Using C++ classes (`Motor`, `Potentiometer`)
- Serial output for debugging and monitoring potentiometer values

## Build & Upload
1. Open this project in **VS Code** with **PlatformIO** installed.
2. Connect the Arduino via USB.
3. Click **Build** (check for errors).
4. Click **Upload** to flash the firmware.
5. Open the **Serial Monitor** at 9600 baud to view button states.