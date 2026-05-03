#include <Arduino.h>

// 定義 LED 引腳
#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("LED 程式啟動");
}

void loop() {
  // LED ON
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED: ON");
  delay(1000);
  
  // LED OFF
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED: OFF");
  delay(1000);
}
