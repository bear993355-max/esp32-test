/*
 * ESP32 LED 閃爍程式
 * 功能：控制 LED 每隔 1 秒亮起和熄滅
 * 作者：User
 * 日期：2026-05-03
 */

#include <Arduino.h>

// ==================== 常數定義 ====================
// 定義 LED 連接的 GPIO 引腳（可根據硬體修改）
#define LED_PIN 2

// 定義閃爍延遲時間（毫秒）
#define DELAY_TIME 1000  // 1000ms = 1秒

// ==================== setup() 初始化函數 ====================
// 程式啟動時只執行一次
void setup() {
  // 初始化串口通訊，波特率 115200
  // 用於在監控器上輸出調試信息
  Serial.begin(115200);
  
  // 設定 LED_PIN 為輸出模式
  // OUTPUT 表示該引腳用於控制外部設備（LED）
  pinMode(LED_PIN, OUTPUT);
  
  // 串口打印啟動消息
  Serial.println("LED 程式啟動");
}

// ==================== loop() 主循環函數 ====================
// 程式運行後不斷循環執行此函數
void loop() {
  // ========== LED 亮起 ==========
  // 將 LED_PIN 設為高電位（HIGH = 5V/3.3V），LED 亮起
  digitalWrite(LED_PIN, HIGH);
  
  // 在串口監控器輸出 LED 狀態
  Serial.println("LED: ON");
  
  // 延遲 1000 毫秒（1秒），保持 LED 亮起
  delay(DELAY_TIME);
  
  // ========== LED 熄滅 ==========
  // 將 LED_PIN 設為低電位（LOW = 0V），LED 熄滅
  digitalWrite(LED_PIN, LOW);
  
  // 在串口監控器輸出 LED 狀態
  Serial.println("LED: OFF");
  
  // 延遲 1000 毫秒（1秒），保持 LED 熄滅
  delay(DELAY_TIME);
  
  // 循環返回開始，重複亮滅操作
}
