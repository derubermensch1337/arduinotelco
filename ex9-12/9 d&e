/**
 * @file    AM2302-Sensor
 * @author  Baldur G.T. & Saar
 * @date    08-01-2026
 * @version 1.0.0
 * @brief   Measure Temperature
*/

#include <Arduino.h>
const uint8_t temperaturePin = A0;    // Define the temperature pin (TMP 36GZ).

// Enisiate the temperature pin and set the board rate.
void setup() {
  Serial.begin(115200);
  pinMode(temperaturePin, INPUT); 
}

// read and print the temperature from the censor.
void loop() {
  float voltage = analogRead(temperaturePin) * 5 / 1023.0;      // Mesure the voltage.
  float temperature = (voltage-0.5) * 100;                      // Convert to degrees in celsius (10mV = 1 C).
    Serial.print("Temperature: ");                              // Printing the temperature.
    Serial.print(temperature);
    Serial.write(0176);
    
    Serial.print("\nVoltage: ");                                // Printing the mesured voltag.
    Serial.print(voltage);
    Serial.print("V\n");
    Serial.println(" ");
    delay(2000);
}
