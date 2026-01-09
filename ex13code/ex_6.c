/**
 * @file    Car-struckt
 * @author  Baldur G.T. & Saar
 * @date    09-01-2026
 * @version 1.0.0
 * @brief   Make and update a struct using pointe and function.
*/


#include <Arduino.h>

struct Car {
  char make[8];
  int year;
} car;

Car myCar = {"BMW",2017};

static void printMyCar(Car &carToPrint) {
  Serial.print("Car type: ");
  Serial.println(carToPrint.make);
  Serial.print("Year of production: ");
  Serial.println(carToPrint.year);
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  printMyCar(myCar);
  delay(2000);
}


