/**
 * @file    pointer_to_float
 * @author  Baldur G.T. & Saar
 * @date    09-01-2026
 * @version 1.0.0
 * @brief   Change value of float using pointer
*/

#include <Arduino.h>

// Inisiate the temperature float, and the pointer to the float adress.
float temperature = 36.6;
float* temperaturePointer = &temperature;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Original temperature: ");     // Print the original value.
  Serial.println(temperature);

  *temperaturePointer += 2;                   // Update the value of temperature using the temperature pointer.

  Serial.print("New temperature: ");          // Print the new value of the temperature.
  Serial.println(temperature);
  
  delay(2000);
}
