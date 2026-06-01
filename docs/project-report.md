# Smart Fan Automation Project Report

## Objective
Design and simulate a Smart Fan Automation system using ESP32, DHT22, and ThingSpeak.

## Components Used
- ESP32
- DHT22 Sensor
- LED
- ThingSpeak
- Wokwi

## Working
The ESP32 reads temperature and humidity data from the DHT22 sensor. When the temperature exceeds 30°C, the fan (represented by an LED) turns on. Sensor data is uploaded to ThingSpeak for cloud monitoring and visualization.

## Results
The system successfully automated fan control and uploaded real-time data to ThingSpeak.

## Future Improvements
- Real DC fan
- Relay module
- PWM speed control
- Mobile notifications
