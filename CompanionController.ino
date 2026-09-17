#include <Wire.h>
#include <Adafruit_INA219.h>
#include <Servo.h>

Adafruit_INA219 ina219;
Servo dropServo;

// Define pins for your Arduino Mega setup
#define SERVO_PIN 9  
#define SIG_PIN 7
#define BUZ_PIN 5

void setup() {
  Serial.begin(9600);
  pinMode(BUZ_PIN, OUTPUT);

  // Wire.begin() automatically assigns SDA to Pin 20 and SCL to Pin 21 on an Arduino Mega
  Wire.begin();

  if (!ina219.begin()) {
    Serial.println("Failed to find INA219 chip");
    while (1) { delay(10); }
  }

  dropServo.attach(SERVO_PIN);
}

void loop() {
  pinMode(SIG_PIN, OUTPUT);
  digitalWrite(SIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(SIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(SIG_PIN, LOW);
  
  pinMode(SIG_PIN, INPUT);
  long duration = pulseIn(SIG_PIN, HIGH);
  int distance = duration * (0.034 / 2);

  float current_mA = ina219.getCurrent_mA();
  Serial.print("Current: "); Serial.print(current_mA); Serial.println(" mA");
  
  // Emergency siren pattern if distance is 20cm or more
  if (distance >= 20) {
    tone(BUZ_PIN, 1000); 
    delay(150);          
    tone(BUZ_PIN, 2000); 
    delay(150);          
  } else {
    noTone(BUZ_PIN);     
  }
  
  // Example control for servo payload release
  if (current_mA > 100.0) {
    dropServo.write(90); 
  }
  
  delay(500); // Reduced slightly to keep the loop responsive to the siren timing
}
