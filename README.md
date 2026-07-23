# 🔥 IoT Fire Alert & Automatic Sprinkler System using ESP32 and Blynk

## Demonstration Video: https://www.linkedin.com/feed/update/urn:li:activity:7484332217687629824/

An IoT-based Fire Alert and Automatic Sprinkler System developed using the **ESP32**, **IR Flame Sensor**, **Relay Module**, and **Blynk IoT**. The system detects the presence of fire, alerts nearby users using an LED and buzzer, automatically activates a water pump through a relay, and sends real-time notifications to a smartphone using the Blynk platform.

This project was developed as part of the **Basic Circuit Theory (BCT) Laboratory** in the **5th Semester**.

---

## 📌 Features

- 🔥 Fire detection using an IR Flame Sensor
- 🚨 LED and buzzer for local alert
- 💧 Automatic activation of water pump via relay
- 📱 Real-time push notification using Blynk IoT
- 🌐 Wi-Fi enabled using ESP32
- ⚡ Low-cost embedded fire safety prototype

---

## 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| ESP32 Development Board | 1 |
| IR Flame Sensor Module | 1 |
| Single Channel Relay Module | 1 |
| 5V DC Water Pump | 1 |
| LED | 1 |
| Active Buzzer | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |
| 5V Power Supply | 1 |

---

## 📷 Circuit Diagram

![Circuit Diagram](Circuit%20Diagram.png)

---

## ⚙ Working Principle

1. The IR Flame Sensor continuously monitors for infrared radiation emitted by fire.
2. When a flame is detected:
   - The ESP32 reads the sensor output.
   - The LED turns ON.
   - The buzzer sounds an alarm.
   - The relay energises and powers the 5V water pump.
   - A push notification is sent through the Blynk mobile application.
3. Once the flame is no longer detected:
   - The alarm stops.
   - The relay switches OFF.
   - The pump stops.
   - The system returns to monitoring mode.

---

## 🔌 GPIO Connections

| ESP32 Pin | Connected Device |
|------------|-----------------|
| GPIO 4 | Flame Sensor Output |
| GPIO 18 | Relay IN |
| GPIO 2 | LED |
| GPIO 5 | Buzzer |
| VIN | 5V Supply |
| GND | Common Ground |

---

## 📱 Blynk Setup

1. Create a new Template in **Blynk IoT**.
2. Copy:
   - Template ID
   - Template Name
   - Authentication Token
3. Replace the following in the code:

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

4. Create an Event named:

```
fire_alert
```

5. Configure the event to send push notifications.

---

## 🚀 Uploading the Code

1. Install the ESP32 Board Package in Arduino IDE.
2. Install:
   - Blynk Library
   - ESP32 Board Support
3. Select the correct COM Port.
4. Upload the sketch.
5. Connect the ESP32 to Wi-Fi.

---

## 📱 Notification Example

```
🔥 Fire Detected!
Pump Activated.
```

---

## 📚 Technologies Used

- ESP32
- Arduino IDE
- Embedded C++
- Blynk IoT
- Wi-Fi Communication
- Relay Control
- Embedded Systems

---


---

## ⭐ If you found this project useful, consider giving it a star!
