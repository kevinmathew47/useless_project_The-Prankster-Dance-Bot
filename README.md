<img width="1280" alt="readme-banner" src="https://github.com/user-attachments/assets/35332e92-44cb-425b-9dff-27bcf1023c6c">

# The Prankster Dance Bot 🎯


## Basic Details

## Kevin Mathew

### Project Description
The Prankster Dance Bot is a whimsical robot that springs to life and dances unpredictably whenever it detects movement nearby. Its sole purpose is to surprise and entertain, adding a delightful and unexpected touch of humor to any space.
### The Problem (that doesn't exist)
Too many rooms are dull and uneventful. People need spontaneous, surprise entertainment to brighten up their day without any pre-scheduled dance parties or music.

### The Solution (that nobody asked for)
Introducing the Prankster Dance Bot—a bot that detects movement and immediately starts grooving with unpredictable dance moves. It’s the ultimate boredom-buster that nobody knew they needed!

## Technical Details
### Technologies/Components Used
# For Software:
- Languages used: C++ (for programming the ESP32 microcontroller)
- Frameworks used: Arduino IDE
- Libraries used: Servo library, MPU6050 library (for motion sensor control)
- Tools used: Arduino IDE, ESP32 package, Serial Monitor for debugging
# For Hardware:
- Main Components:
-- ESP32 microcontroller
- IR motion sensor
- MPU6050 sensor (to sense its own orientation and movements)
- Servo motor for dance moves
# Specifications:
- ESP32: 240 MHz dual-core, Wi-Fi and Bluetooth capabilities
- Servo motor: 180-degree range of motion for exaggerated dance moves
- IR sensor range: Adjustable sensitivity to detect nearby motion
# Tools Required:
- Breadboard
- Jumper wires

### Implementation
For Software:
# Installation
- Install the Arduino IDE.
- Add the ESP32 board to Arduino by going to Preferences > Additional Board Manager URLs and pasting the ESP32 URL.
- Install necessary libraries: Sketch > Include Library > Manage Libraries

# Run
- Connect the ESP32 to your computer via USB.
- Upload the code by selecting the correct board and port in Tools.
- Open the Serial Monitor to check sensor data and debug as needed.

# Diagrams
![Workflow](Add your workflow/architecture diagram here)
*Add caption explaining your workflow*

For Hardware:

# Schematic & Circuit

+-----------------------+          +---------------------+
|        ESP32          |          |    IR Motion Sensor |
|                       |          |                     |
| 3.3V -------------- VCC|----------| VCC                 |
| GND -------------- GND |----------| GND                 |
| GPIO 23 ----------- OUT |----------| OUT                 |
|                       |          +---------------------+
| GPIO 21 (SDA) --------|----------+---------------------+
| GPIO 22 (SCL) --------|----------| MPU6050             |
|                       |          |                     |
| GPIO 18 ----------- Signal|--------| Servo Motor        |
|                       |          |                     |
| 5V --------------- VCC |---------| VCC                 |
| GND --------------- GND |---------| GND                 |
+-----------------------+          +---------------------+


---
Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProject--24-24?link=https%3A%2F%2Fwww.tinkerhub.org%2Fevents%2FQ2Q1TQKX6Q%2FUseless%2520Projects)



