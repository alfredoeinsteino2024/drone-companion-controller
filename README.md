# Drone Companion Controller 🚁

An Arduino Mega 2560-based drone companion controller firmware and Proteus simulation project developed during my internship at **LET Innovations**.

This system integrates power monitoring, distance sensing, I2C communication, and precise servo payload control to serve as an intelligent onboard companion subsystem.

---

## 🛠️ Features & Hardware Integration

- **Microcontroller:** Arduino Mega 2560 (chosen for its ample I/O pins and hardware serial ports).
- **Power Monitoring:** INA219 sensor for real-time bus voltage, shunt voltage, current, and power tracking over I2C.
- **Proximity Sensing:** HC-SR04 ultrasonic sensor for precise distance measurement and obstacle/payload clearance detection.
- **Actuation:** Servo motor control for automated payload release mechanisms.
- **Simulation:** Fully validated and tested in Proteus ISIS.

---

## 📂 Repository Structure

```text
├── firmware/
│   └── drone_companion_controller.ino   # Main Arduino C++ source code
├── schematics/
│   └── proteus_simulation.pdsprj        # Proteus ISIS circuit design file
├── docs/
│   └── wiring_diagram.png               # Pinout and schematic reference
└── README.md
```

---

## 🔌 Pinout & Wiring Guide

| Component            | Arduino Mega 2560 Pin | Description                 |
|----------------------|-----------------------|-----------------------------|
| INA219 (SDA)         | Pin 20 (SDA)          | I2C Data Line               |
| INA219 (SCL)         | Pin 21 (SCL)          | I2C Clock Line              |
| HC-SR04 (Trig)       | Pin 9                 | Ultrasonic Trigger Pulse    |
| HC-SR04 (Echo)       | Pin 8                 | Ultrasonic Echo Return      |
| Servo Motor (Signal) | Pin 6 (PWM)           | Payload Release Actuation   |

---

## 🚀 Getting Started

### Prerequisites

- Arduino IDE (v1.8.x or v2.x)
- Proteus Professional (for running the circuit simulation)
- Required libraries:
  - `Adafruit_INA219` (install via Arduino Library Manager)
  - `Servo` (built-in Arduino library)

### Running the Simulation

1. Clone this repository or download the ZIP:

```bash
   git clone https://github.com/alfredoeinsteino2024/drone-companion-controller.git
```

2. Open `schematics/proteus_simulation.pdsprj` in Proteus ISIS.
3. Compile the `.ino` sketch in the Arduino IDE (or export the compiled `.hex` file) and load it into the Arduino Mega model within Proteus.
4. Run the simulation to observe real-time sensor telemetry and servo actuation!

---

## 💡 Engineering Takeaways

Working on this project pushed me to bridge the gap between firmware logic and hardware simulation. Debugging the I2C bus communications for the INA219 alongside precise timing for the HC-SR04 ultrasonic sensor was a fantastic exercise in robust embedded systems design.

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).
