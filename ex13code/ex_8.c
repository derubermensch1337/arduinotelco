/**
 * @file    Nested-struk-and-uion 
 * @author  Baldur G.T. & Saar
 * @date    09-01-2026
 * @version 1.0.0
 * @brief   Making a nested strukt and union, and accesing data within.
*/

#include <Arduino.h>

typedef struct sensor {     // Make the strukt
  char name[20];
  union readData {          // Make the union
    float temp;
    float humidity;
    char status[25];
  } readData;  
} Sensor;

sensor newMesurments = {"Copenhagen nuclear", {98.7}};  // Insert the data into an instance of the strukt.

void setup() {
  Serial.begin(115200);  
  Serial.println("Mesurments: ");               // Print the data.
  Serial.println(newMesurments.name);
  Serial.println(newMesurments.readData.temp);
  delay(2000);
}

void loop() {
}
