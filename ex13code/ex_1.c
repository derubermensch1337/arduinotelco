#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  int x = 10;
  int* p = &x;
  Serial.println(*p);
}
