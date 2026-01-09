/**
 * @file    union-data-conversion
 * @author  Baldur G.T. & Saar
 * @date    09-01-2026
 * @version 1.0.0
 * @brief   Convert data from float to HEX using an union.
*/


#include <Arduino.h>

union conversion {    // Define the union.
  float input;
  char arr[4];
} Conversion;

conversion newConversion = {23432.43};      // Make an instance of the union.

void setup() {
  Serial.begin(115200);
  Serial.print("Float value is: ");
  Serial.println(newConversion.input);      // Print the float
  Serial.print("Hex:");
  Serial.print(newConversion.arr[0], HEX);  // Convert and print the float as HEX.
}

void loop() {
}

