# Task 1 – Smart Irrigation System Using ESP32

## 1. Aim

To develop a smart irrigation control system using an ESP32, soil moisture sensor, and relay module to monitor soil moisture and automatically switch the relay according to the moisture level.

## 2. Introduction

Traditional irrigation systems require manual monitoring and watering of plants. This can lead to water wastage and inefficient irrigation. A smart irrigation system helps automate the process by monitoring the moisture content of the soil.

In this project, an ESP32 microcontroller is interfaced with a soil moisture sensor and a relay module. The sensor continuously measures the soil moisture level and sends the analog output to the ESP32. The ESP32 compares the measured value with predefined threshold values and switches the relay ON when the soil is dry and OFF when the soil is sufficiently moist.

In our implementation, no solenoid valve is used. The relay switching operation is demonstrated through its clicking sound and status changes.

## 3. Components Required

1. ESP32 DevKit V1
2. Soil moisture sensor
3. Single-channel relay module
4. Jumper wires
5. USB data cable
6. Breadboard (optional)

## 4. Circuit Connections

### A. Soil Moisture Sensor to ESP32

| Soil Moisture Sensor Pin | ESP32 Pin |
|---|---|
| VCC | 3.3 V |
| GND | GND |
| AO (Analog Output) | GPIO 34 |

### B. Relay Module to ESP32

| Relay Module Pin | ESP32 Connection |
|---|---|
| VCC | Compatible supply, such as 5 V if required by the module |
| GND | GND, as required by the module |
| IN | GPIO 26 |

**Note:** Ensure that the relay module is compatible with the ESP32's 3.3 V logic. No solenoid valve or external valve power circuit is connected in this implementation.

## 5. Working Principle

1. The soil moisture sensor measures the moisture content of the soil.
2. The sensor sends an analog signal to GPIO 34 of the ESP32.
3. The ESP32 reads the sensor value and compares it with the predefined threshold.
4. When the soil moisture reading indicates dry soil, the ESP32 activates the relay.
5. The relay switches ON and produces a clicking sound.
6. When the soil becomes sufficiently moist, the ESP32 deactivates the relay.
7. The process repeats continuously to monitor changes in soil moisture.

The relay demonstrates the automatic switching mechanism. Since no solenoid valve or other irrigation actuator is connected, the current prototype does not control actual water flow.

## 6. Advantages

1. Automates soil moisture monitoring.
2. Demonstrates automatic relay control based on sensor input.
3. Reduces the need for continuous manual monitoring.
4. Provides a simple and low-cost foundation for an irrigation automation system.
5. Can be extended to control a water pump or solenoid valve in a future implementation.

## 7. Applications

- Home gardening systems
- Plant nurseries
- Greenhouse monitoring
- Smart agriculture prototypes
- IoT-based irrigation systems
