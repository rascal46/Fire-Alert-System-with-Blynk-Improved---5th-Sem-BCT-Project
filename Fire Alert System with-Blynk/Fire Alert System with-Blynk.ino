#define BLYNK_TEMPLATE_ID "TMPL3Kv-j3YZ4"
#define BLYNK_TEMPLATE_NAME "FIRE"
#define BLYNK_AUTH_TOKEN "bi9knZdYRTra-Y6ZKAw6XxPNIDDHbZVl"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Galaxy A12 A2AA";
char pass[] = "yapn8271";

// ESP32 Fire Detection
// GPIO 18 goes HIGH when fire is detected

#define FLAME_PIN 4
#define RELAY_PIN 18
#define LED_PIN 2
#define BUZZER_PIN 5

bool fireSent = false;

void setup() {
  Serial.begin(115200);

  pinMode(FLAME_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);   // Initially OFF
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();

  int flame = digitalRead(FLAME_PIN);

  if (flame == HIGH) {   // Change to LOW if your flame sensor is active LOW
    Serial.println("nothing DETECTED!");

    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    if (!fireSent) {
      Blynk.logEvent("fire_alert", "🔥 Fire Detected! Pump Activated.");
      fireSent = true;
    }
  }
  else {
    Serial.println("Fire ahhhh");

    digitalWrite(RELAY_PIN, LOW);
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    fireSent = false;
  }

  delay(100);
}