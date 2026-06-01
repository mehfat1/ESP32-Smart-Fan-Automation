# ESP32-Smart-Fan-Automation
IoT-based Smart Fan Automation system using ESP32, DHT22 sensor, and ThingSpeak for real-time temperature and humidity monitoring with automatic fan control.
# ESP32 Smart Fan Automation

## Overview
A Smart Fan Automation system using ESP32, DHT22 sensor, and ThingSpeak.

## Features
- Monitors temperature and humidity
- Automatically turns fan ON above 30°C
- Sends data to ThingSpeak cloud
- Real-time monitoring

## Components
- ESP32
- DHT22 Sensor
- LED (Fan Indicator)
- ThingSpeak

## Technologies
- Arduino IDE
- ESP32
- Wokwi Simulator
- ThingSpeak
- IoT

## Output
- Temperature Graph
- Humidity Graph
- Fan Status Graph

## Screenshots

### Circuit Diagram
![Circuit](screenshots/circuit.png)

### Serial Monitor Output
![Serial Monitor](screenshots/serial-monitor.png)

### Temperature Graph
![Temperature](screenshots/temperature-graph.png)

### Humidity Graph
![Humidity](screenshots/humidity-graph.png)

### Fan Status Graph
![Fan Status](screenshots/fan-status-graph.png)

## Simulation
Wokwi Project:
(https://wokwi.com/projects/465551854616741889)

## Connections
| DHT22 | ESP32 |
|--------|--------|
| VCC | 3V3 |
| DATA | GPIO 15 |
| GND | GND |

| LED | ESP32 |
|-----|--------|
| Anode (+) | GPIO 2 |
| Cathode (-) | GND through 220Ω resistor |

## Results
- Temperature and humidity were successfully monitored.
- Fan activated automatically above 30°C.
- Data was uploaded to ThingSpeak.
- Real-time graphs were generated.
  
## Author
Mehak Ansari
