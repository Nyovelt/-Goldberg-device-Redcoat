#include "Servo.h"
const int touchSensor_1 = 4;//YELLOE
const int touchSensor_2 = 5;//GREW
const int touchSensor_3 = 6;//
//const int touchSensor_2 = 6;
//const int touchSensor_3 = 5;
const int touchSensor_4 = 9;
const int RELAY = 10;//purple
const int servo_1 = 2;
const int servo_2 = 3;
const int LED_RED = 7;
bool flag_touchSensor1 = 0;
bool flag_touchSensor2 = 0;
bool flag_touchSensor3 = 0;
int flag = 0;
Servo myservo_1;
Servo myservo_2;
void setup() {
  // put your setup code here, to run once:
  pinMode(touchSensor_1, INPUT);

  pinMode(touchSensor_2, INPUT);
  pinMode(touchSensor_3, INPUT);
  pinMode(touchSensor_4, INPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(RELAY, OUTPUT);
  myservo_1.attach(servo_1);
  myservo_2.attach(servo_2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  while (digitalRead(touchSensor_1) == LOW)
  {
    flag_touchSensor1 = !flag_touchSensor1;
    delay(1000);
    //Serial.println(flag_touchSensor1);
  }

  if (flag_touchSensor1 == 1) {
    //Serial.println("Naive");
    myservo_1.write(0);
  }
  else {
    //Serial.println("Evian");
    myservo_1.write(90);
  }



  while (digitalRead(touchSensor_2) == LOW)
  {
    flag_touchSensor2 = !flag_touchSensor2;
    delay(1000);
    //Serial.println(flag_touchSensor2);
  }

  if (flag_touchSensor2 == 1) {
    //Serial.println("Excited");
    myservo_2.write(50);
  }
  else {
    //Serial.println("Deticxe");
    myservo_2.write(90);
  }


  digitalWrite(LED_RED, LOW);

  while (digitalRead(touchSensor_3) == LOW) {

    Serial.println("Angry");

    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);


  }

  while (digitalRead(touchSensor_4) == LOW) {
    Serial.println("**********");
    delay(233);
    Serial.println("HASU`s Goldberg device");
    delay(233);
    Serial.println("**********");
    delay(233);
    Serial.println("Flag is raising");
    delay(233);
    Serial.println("");
    delay(233);
    Serial.println("****");
    delay(233);
    Serial.println("**  ****");
    delay(233);
    Serial.println("**     ******");
    delay(233);
    Serial.println("**         *****");
    delay(233);
    Serial.println("**  ****");
    delay(233);
    Serial.println("*****");
    delay(233);
    Serial.println("*");
    delay(233);
    Serial.println("*");
    delay(233);
    Serial.println("*");
    delay(233);
    Serial.println("*");
    delay(233);rd33s3S
    Serial.println("*");
    delay(233);
    Serial.println("");
    delay(233);
    Serial.println("Flag is raised");
    delay(233);
    Serial.println("***********");
    delay(233);
    Serial.println("***********");
    delay(233);
    Serial.println("");
    delay(233);
    Serial.println("Thanks for watching");
    delay(233);
    Serial.println("");
    delay(233);
    Serial.println("***********");
    delay(233);
    Serial.println("***********");
    delay(233);
  }
  /*if(flag ==1){
    digitalWrite(RELAY, HIGH);
    delay(2333);
    }*/




}
