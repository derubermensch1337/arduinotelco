/*
Created 07-01-2026 By Baldur G.T.
*/

#include <Arduino.h>

// Defining the I/O pines used for LEDS:
static uint8_t A = 9;
static uint8_t B = 10;
static uint8_t C = 11;
static uint8_t D = 12;
static uint8_t E = 13;

// Set the board rate, and set the I/O pins as an output.
void setup() {
  Serial.begin(115200);
  pinMode(A, OUTPUT); 
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT); 
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {         // Test if the serial port is available.
    int serialData = Serial.read();     // Read the data send over serial, and store as an int.

    switch (serialData) {
    case 97:                            // If the letter a is resived (ASCI 97)
      digitalWrite(A, HIGH);            // Turn on the "a" LED, turn of the rest.
      break;
    case 98:                            // If the letter b is resived (ASCI 98)
      digitalWrite(B, HIGH);            // Turn on the "b" LED, turn of the rest.
      break;
    case 99:                            // If the letter c is resived (ASCI 99)
      digitalWrite(C, HIGH);            // Turn on the "c" LED, turn of the rest.
      break;
    case 100:                           // If the letter d is resived (ASCI 100)
      digitalWrite(D, HIGH);            // Turn on the "d" LED, turn of the rest.
      break;
    case 101:                           // If the letter e is resived (ASCI 101)
      digitalWrite(E, HIGH);            // Turn on the "e" LED, turn of the rest.
      break;
    default:
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      break;
    }
  } 
} 
