/**
 * @file    11c
 * @author  Baldur G.T. & Saar
 * @date    08-01-2026
 * @version 1.0.0
 * @brief   Measure Temperature
*/
// import headers
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// define LCD parameters with 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2); 

// define the pins
const uint8_t temperaturePin = A0;    

// Enisiate the temperature pin and set the board rate.
void setup() {
  Serial.begin(115200);
  // configure the pins
  pinMode(temperaturePin, INPUT);
  // initialize LCD
  lcd.init();
  lcd.backlight();
  // Write top line (Temperature label)
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
}


void loop() {
  // read and print the temperature from the censor.
  float voltage = analogRead(temperaturePin) * 5 / 1023.0;
  float temperature = (voltage - 0.5) * 100;
  Serial.println(temperature);

  //display temperature
  lcd.setCursor(0,1);
  lcd.print(temperature);
  lcd.setCursor(6,1);
  lcd.print("C");

  //add a .5 second delay so the human eye can actually interpret what is going on with the serial output
  delay(500);
}
