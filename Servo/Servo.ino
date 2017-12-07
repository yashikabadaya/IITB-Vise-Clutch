#include <Servo.h>
#include<SoftwareSerial.h>
SoftwareSerial Bluetooth(0,1);
int data;
Servo myservo;

void rotation (int data)
{
  myservo.write(data);
  }


void setup() {
  // put your setup code here, to run once:
Bluetooth.begin(9600);
myservo.attach(9);
myservo.write(0);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Bluetooth.available())
{ data=Bluetooth.read();
rotation(data);
}

}
