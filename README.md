# PBMotorControl

A push-button controlled DC motor firmware written in C++ using PlatformIO.

## Hardware
- Arduino UNO R3
- DC Motor
- Push-button with pull-down resistor (1K)
- Diode (1N4007)
- MOSFET (IRF520)

## Features
- Motor control via push-button (active HIGH)
- Using C++ classes (`Motor`, `Button`)
- Serial output for debugging and monitoring button state

## Build & Upload
1. Open this project in **VS Code** with **PlatformIO** installed.
2. Connect the Arduino via USB.
3. Click **Build** (check for errors).
4. Click **Upload** to flash the firmware.
5. Open the **Serial Monitor** at 9600 baud to view button states.

## Folder Structure
PBMotorControl/
├── platformio.ini      # Project configuration file
├── src/                # Application entry point (main.cpp)
├── include/            # Shared configuration headers (Config.h)
├── lib/                # Reusable components
│   ├── Button/
│   │   ├── Button.h
│   │   └── Button.cpp
│   └── Motor/
│       ├── Motor.h
│       └── Motor.cpp
├── .gitignore          # Ignored files for Git
└── README.md           # Project documentation
