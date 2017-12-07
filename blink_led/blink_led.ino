Arduino

#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(10, 9); // RX, TX
int LED = 13; // the on-board LED
int Data; // the data received

void setup() {
  Bluetooth.begin(9600);
  Serial.begin(9600);
  Serial.println("Waiting for command...");
  Bluetooth.println("Send 1 to turn on the LED. Send 0 to turn Off");
  pinMode(LED,OUTPUT);

}

void loop() {
  if (Bluetooth.available()){ //wait for data received
    Data=Bluetooth.read();
    if(Data=='1'){  
      digitalWrite(LED,1);
      Serial.println("LED On!");
      Bluetooth.println("LED On!");
    }
    else if(Data=='0'){
       digitalWrite(LED,0);
       Serial.println("LED Off!");
       Bluetooth.println("LED  On D13 Off ! ");
    }
    else{;}
  }
delay(100);
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(10, 9); // RX, TX
int LED = 13; // the on-board LED
int Data; // the data received
 
void setup() {
  Bluetooth.begin(9600);
  Serial.begin(9600);
  Serial.println("Waiting for command...");
  Bluetooth.println("Send 1 to turn on the LED. Send 0 to turn Off");
  pinMode(LED,OUTPUT);
 
}
 
void loop() {
  if (Bluetooth.available()){ //wait for data received
    Data=Bluetooth.read();
    if(Data=='1'){  
      digitalWrite(LED,1);
      Serial.println("LED On!");
      Bluetooth.println("LED On!");
    }
    else if(Data=='0'){
       digitalWrite(LED,0);
       Serial.println("LED Off!");
       Bluetooth.println("LED  On D13 Off ! ");
    }
    else{;}
  }
delay(100);
}
