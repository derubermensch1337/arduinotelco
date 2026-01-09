void setup() {
  // put your setup code here, to run once:
  int ploop[] = {1,2,3,4,5};
    int* p = ploop;
    for (int i = 0; i < 5; i++) {
      Serial.println(p[0]);
      p++;
    }
}

void loop() {
  // put your main code here, to run repeatedly:

}

