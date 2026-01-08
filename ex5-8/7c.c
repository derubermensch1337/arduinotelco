/*
Created 07-01-2026 By Baldur G.T. & Saar J. 
*/

#include <Arduino.h>

// Define the I/O pins.
static int R = 3;
static int G = 5;
static int B = 6;

// setup the LED pins.
void setup() {
  Serial.begin(115200);
  pinMode(R, OUTPUT); 
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT); 
}

void loop() {
  if(Serial.available() > 0) {            // Set the LED pins to the input value.
    analogWrite(R, Serial.parseInt());
    analogWrite(G, Serial.parseInt());
    analogWrite(B, Serial.parseInt());
  }
}
