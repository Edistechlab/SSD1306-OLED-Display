/*
Project:  SSD1306 OLED Display  
Author:   Thomas Edlinger for www.edistechlab.com
Date:     Created 06.06.2020
Version:  V1.0
 
- Used Aduino IDE V1.8.12
Required libraries (sketch -> include library -> manage libraries)
 - Adafruit SSD1306 V2.2.1
 - Adafruit GFX Library V1.8.3
Required Board (Tools -> Board -> Boards Manager...)
 - Board: esp8266 by ESP8266 Community V2.7.1 
 - Board: ESP32 by Espressif Systems V1.0.2

Wirering for the Display:
-SSD1306    -ESP8266/MCU      -ESP32        -Arduino UNO    -Arduino Mega
VCC         3.3V              3.3V          3.3V            3.3V
GND         GND               GND           GND             GND
SCL         D1 / GPIO 5       GPIO 22       A5              21     
SDA         D2 / GPIO 4       GPIO 21       A4              20   
*/

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // I2C address = 0x3C
  delay(1000);
  display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(0, 0);
display.print("Edi");

  
  display.display(); 
}

void loop() {
}
