int enableA = 3;
int MotorA1 = 4;
int MotorA2 = 7;

int enableB = 10;
int MotorB1 = 8;
int MotorB2 = 12;

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
  // put your main code here, to run repeatedly:
//move fwd
analogWrite(enableA, 255);
analogWrite(enableB, 255);

digitalWrite (MotorA1, LOW);
digitalWrite (MotorA2, HIGH);


digitalWrite (MotorB1, LOW);
digitalWrite (MotorB2, HIGH);



}
