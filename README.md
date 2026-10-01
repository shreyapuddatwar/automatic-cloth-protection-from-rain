# Automatic Cloth Protection from Rain using Arduino

This project is designed to protect clothes from rain automatically using an Arduino and a rain sensor.

## Components Used

- Arduino
- Rain Sensor
- Motor
- Motor Driver
- Jumper Wires

## Working

The rain sensor detects a change in the rain condition.

- When rain starts, the motor rotates in the forward direction.
- When the rain stops, the motor rotates in the reverse direction.
- The motor runs for 2 seconds in each direction.

## Arduino Connections

| Component | Arduino Pin |
|---|---|
| Rain Sensor | A0 |
| Motor Forward | D3 |
| Motor Reverse | D4 |

## Programming

The project is programmed using Arduino C/C++.

## Files

- `rain_cloth_protection.ino` - Arduino source code

## Note

A motor driver should be used to control the motor safely instead of connecting the motor directly to the Arduino pins.
