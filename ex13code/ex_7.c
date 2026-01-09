/**
 * @file    define-union 
 * @author  Baldur G.T. & Saar
 * @date    09-01-2026
 * @version 1.0.0
 * @brief   Define and use an union.
*/

#include <Arduino.h>


union data {          // Make the union
  int number;
  float desimal;
  char status[20];
} Data;

void setup() {
  Serial.begin(115200);  

  data newMesurments =  {21};
  Serial.println("Print the float: ");                        // Print the original float.
  Serial.println(newMesurments.number);

  data newMesurments = {3.8};
  Serial.println("Print after updating the union: ");          // Print the new data.
  Serial.println(newMesurments.desimal);
}

void loop() {
}
