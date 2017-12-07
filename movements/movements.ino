#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1);
int enableA = 3;
int MotorA1 = 4;
int MotorA2 = 7;

int enableB = 10;
int MotorB1 = 8;
int MotorB2 = 12;
int a;

void setup() {
  // put your setup code here, to run once:

Serial.begin (9600); //configure pin modes
//pinMode (pwm, OUTPUT);
pinMode (enableA, OUTPUT);
pinMode (MotorA1, OUTPUT);
pinMode (MotorA2, OUTPUT);
pinMode (enableB, OUTPUT);
pinMode (MotorB1, OUTPUT);
pinMode (MotorB2, OUTPUT);

}

void loop() {
while(Serial.available()){  
a=Serial.read();
//move fwd

if(a=='1') {
analogWrite(enableA, 255);
analogWrite(enableB, 255);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("Moving fwd :)");}


//move back

if(a=='2') {
analogWrite(enableA, 255);
analogWrite(enableB, 255);

digitalWrite (MotorA1, HIGH);
digitalWrite (MotorA2, LOW);


digitalWrite (MotorB1, HIGH);
digitalWrite (MotorB2, LOW);
Serial.println("Moving backwards :("); }



//turn right

if(a=='3') {
analogWrite(enableA, 125);
analogWrite(enableB, 255);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("Turning right :)");}



//turn left

if(a=='4') {
analogWrite(enableA, 255);
analogWrite(enableB, 125);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("Turning left :)");}

//stop

if(a=='5') {
analogWrite(enableA, 0);
analogWrite(enableB, 0);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("STOP :)");}



}
}
