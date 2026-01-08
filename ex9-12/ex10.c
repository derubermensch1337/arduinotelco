/**
 * @file    10b
 * @author  Baldur G.T. & Saar
 * @date    08-01-2026
 * @version 1.0.0
 * @brief   Measure Temperature
*/

#include <Arduino.h>
// define the pins
const uint8_t temperaturePin = A0;    
const uint8_t red = 2;
const uint8_t yel = 3;
const uint8_t grn = 4;

// Enisiate the temperature pin and set the board rate.
void setup() {
  Serial.begin(115200);
  // configure the pins
  pinMode(temperaturePin, INPUT);
  pinMode(red, OUTPUT); 
  pinMode(yel, OUTPUT);
  pinMode(grn, OUTPUT); 
}

// read and print the temperature from the censor.
void loop() {
  float voltage = analogRead(temperaturePin) * 5 / 1023.0;
  float temperature = (voltage - 0.5) * 100;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.write(176);
  Serial.println();
  //squeezing the sensor with my fingers causes a maximal increase of  around 4 degrees after about a minute, therefore 26 degrees seemed like a reasonable threshold for high temperature
  if (temperature >= 26) {
    digitalWrite(red, HIGH);
    digitalWrite(yel, LOW);
    digitalWrite(grn, LOW);
  }
  // squezzing the sensor with my fingers after submersing them in snow for a few minutes leads the temperature to drop to ~20 degrees, so 20.5 was chosen as a threshold to guarantee a complete light change under these conditions, avoiding flipflopping between yellow and red.
  else if (temperature <= 20.5) {
    digitalWrite(red, LOW);
    digitalWrite(yel, LOW);
    digitalWrite(grn, HIGH);
  }
  // room temperature was about 22-23 degrees, so anything within the undefined range makes sense as a medium temperature.
  else {
    digitalWrite(red, LOW);
    digitalWrite(yel, HIGH);
    digitalWrite(grn, LOW);
  }
  //add a .5 second delay so the human eye can actually interpret what is going on with the serial output
  delay(500);
}
