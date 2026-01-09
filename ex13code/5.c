void setup() {
  // put your setup code here, to run once:
  struct Student {
      char name[5];
      int age;
      int grade;
  };
  struct Student sar = {"sar", 26, 16};

  Serial.println(sar.name);
  Serial.println(sar.age);
  Serial.println(sar.grade);
}

void loop() {
  // put your main code here, to run repeatedly:

}

