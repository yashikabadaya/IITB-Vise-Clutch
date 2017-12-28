#include <Servo.h>
Servo myservo;
char a;

void setup() 
{
Serial.begin(9600);
myservo.attach(9);
myservo.write(0);
}

void loop() 
{
// if(Serial.available()){
// a= Serial.read();
//
//if(a=='1'){
//  myservo.write(0);
//  
//  }
//else if(a=='2'){
//  myservo.write(90);
//  }
//  
//  
//}

}
