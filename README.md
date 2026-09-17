# Drone Companion Controller and Payload Subsystem

An Arduino Mega 2560-based drone companion controller and payload release subsystem featuring real-time current telemetry, proximity detection, and automated emergency alert patterns simulated in Proteus VSM.

## Proteus Schematic Preview
<img width="726" height="520" alt="y" src="https://github.com/user-attachments/assets/c28dcbfc-7d6f-473b-88d8-cdb6377986bd" />
<img width="1365" height="746" alt="w" src="https://github.com/user-attachments/assets/dfb5f7f8-453f-4c04-91ae-d7ada8fc561c" />
<img width="1365" height="759" alt="LET@IT" src="https://github.com/user-attachments/assets/cdcb7166-1b09-4c89-8dcf-70d052e701d9" />
<img width="1365" height="756" alt="LET" src="https://github.com/user-attachments/assets/5ddd9ca5-7efc-4d3f-91d0-a8d3b5586a5d" />
<img width="1365" height="756" alt="LET" src="https://github.com/user-attachments/assets/438996a1-1790-4892-a05f-2eee9e056f94" />

## Features
- **Microcontroller:** Arduino Mega 2560 core.
- **Power Monitoring:** INA219 current sensor via I2C hardware TWI pins (SDA 20, SCL 21).
- **Proximity Detection:** HC-SR04 ultrasonic distance sensor.
- **Actuation & Alerts:** PWM servo motor payload drop mechanism and custom multi-frequency emergency siren patterns.

