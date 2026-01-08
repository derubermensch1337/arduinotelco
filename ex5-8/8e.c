/*
Created 07-01-2026 by Baldur G.T. & Saar J.
*/
#include <Arduino.h>

// Defining the I/O pins 
static uint16_t potentiometer = A0;
static uint8_t r_LED = 6;
static uint8_t g_LED = 5;
static long b_LED = 3;

// Seting up the LED pins, and setting the Red and Green light levels.
void setup() {
  Serial.begin(115200);
  pinMode(r_LED, OUTPUT); 
  pinMode(g_LED, OUTPUT);
  pinMode(b_LED, OUTPUT); 
  analogWrite(r_LED, 200);
  analogWrite(g_LED, 0);
}

void loop() {
  uint16_t potentiometerRead = analogRead(potentiometer);   // Read the potentiometer level.
  analogWrite(b_LED, potentiometerRead*255/670);            // "Normalice" the values to be between 1-255
}
