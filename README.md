# Touch Sensor LED Control using Arduino

Touch karne par LED ON, dobara touch karne par LED OFF hoti hai.

## Components Required
- Arduino UNO
- TTP223 Touch Sensor Module
- LED
- 220 ohm Resistor
- Jumper Wires
- Breadboard

## Circuit Connections
| Component | Arduino Pin |
| --- | --- |
| Touch Sensor VCC | 5V |
| Touch Sensor GND | GND |
| Touch Sensor OUT | D2 |
| LED Positive (+) | D13 |
| LED Negative (-) | GND (220 ohm resistor ke saath) |

## How it Works
1. Touch sensor ko touch karte hi D2 pin HIGH ho jata hai.
2. Arduino LED ka state change kar deta hai.
3. Ek touch = ON, dobara touch = OFF.

## How to Run
1. Arduino IDE me `touch_sensor_led.ino` file kholo.
2. Board: Arduino UNO select karo.
3. Code upload karo aur sensor touch karke dekho.

## Project Link
https://github.com/rv639231-hash/touch-sensor-led-arduino
