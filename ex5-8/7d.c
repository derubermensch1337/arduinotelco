/*
Created 07-01-2026 By Baldur G.T. & Saar J. 
*/

#include <Arduino.h>

// Define the LED I/O pins.
static int r_LED = 3;
static int g_LED = 5;
static int b_LED = 6;

// Set the step count.
static int step = 100;

// Light level of the LED
int r_value = 0;
int g_value = 0;
int b_value = 0;

// Light level to get to.
int R_value = 0;
int G_value = 0;
int B_value = 0;

// Set up the LED pins.
void setup() {
  Serial.begin(115200);
  pinMode(r_LED, OUTPUT); 
  pinMode(g_LED, OUTPUT);
  pinMode(b_LED, OUTPUT); 
}

void loop() {
  if(Serial.available() > 0) {              // Start by getting the LED values over serial.
    R_value = Serial.parseInt();            // store the LED values as int.
    G_value = Serial.parseInt();
    B_value = Serial.parseInt();

    for (int i = 20; i <= step; i++) {      // Using a for loop to increase the light level, (asymptotic curv)
      r_value = R_value / ((step+1) - i);   // Calculate the new light level for the LED.
      g_value = G_value / ((step+1) - i);
      b_value = B_value / ((step+1) - i);
      analogWrite(r_LED, r_value);          // Set the new LED level
      analogWrite(g_LED, g_value);
      analogWrite(b_LED, b_value);
      delay(50);                            // Delay befor calculating the next level.
    }
  }
}
