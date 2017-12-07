#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(0,1);
int enableA = 11;
int MotorA1 = 4;
int MotorA2 = 7;

int enableB = 10;
int MotorB1 = 8;
int MotorB2 = 12;
int a;

void setup() {
  // put your setup code here, to run once:
Bluetooth.begin(9600);
Serial.begin (9600); //configure pin modes
//pinMode (pwm, OUTPUT);
Bluetooth.println("Send 1 for moving fwd, 2 for backwards, 3 for turning right, 4 for turning left and 5 to stop.");
pinMode (enableA, OUTPUT);
pinMode (MotorA1, OUTPUT);
pinMode (MotorA2, OUTPUT);
pinMode (enableB, OUTPUT);
pinMode (MotorB1, OUTPUT);
pinMode (MotorB2, OUTPUT);

}

void loop() {
while(Bluetooth.available()){  
a=Bluetooth.read();
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

else if(a=='2') {
analogWrite(enableA, 255);
analogWrite(enableB, 255);

digitalWrite (MotorA1, HIGH);
digitalWrite (MotorA2, LOW);


digitalWrite (MotorB1, HIGH);
digitalWrite (MotorB2, LOW);
Serial.println("Moving backwards :("); }



//turn right

else if(a=='3') {
analogWrite(enableA, 125);
analogWrite(enableB, 255);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("Turning right :)");}



//turn left

else if(a=='4') {
analogWrite(enableA, 255);
analogWrite(enableB, 125);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("Turning left :)");}

//stop

else if(a=='5') {
analogWrite(enableA, 0);
analogWrite(enableB, 0);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);
Serial.println("STOP :)");}

else {;}



}
}
