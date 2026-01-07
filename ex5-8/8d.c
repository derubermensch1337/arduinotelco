void setup() {
  Serial.begin(9600);
}

void loop() {
  // what does A0 say?
  int sense = analogRead(A0);
  // convert analog to volts
  float volt = sense * (3.3 / 1023.0);
  // print out voltage
  Serial.println(sense);
}
