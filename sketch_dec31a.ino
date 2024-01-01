#include <Servo.h>

Servo motor1;
int potpin1 = A0;
int val1;

Servo motor2;
int potpin2 = A1;
int val2;

Servo motor3;
int potpin3 = A2;
int val3;

Servo motor4;
int potpin4 = A3;
int val4;

void setup(){
  Serial.begin(9600);
  motor1.attach(3);
  motor2.attach(5);
  motor3.attach(6);
  motor4.attach(9);
}

void loop() {
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 0, 180);
  motor1.write(val1);

  val2 = analogRead(potpin2);
  val2 = map(val2, 0, 1023, 0, 180);
  motor2.write(val2);

  val3 = analogRead(potpin3);
  val3 = map(val3, 0, 1023, 0, 180);
  motor3.write(val3);

  val4 = analogRead(potpin4);
  val4 = map(val4, 0, 1023, 0, 180);
  motor4.write(val4);
}