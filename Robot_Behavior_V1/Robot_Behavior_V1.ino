// Jose De Jesus Alarcon
// Robot Behavior
//10/9/2022
void setup()
{
pinMode(11, OUTPUT);
pinMode(A0,INPUT);// Here the pin is connected to the PWM
pinMode(10, OUTPUT);
pinMode(A1,INPUT);// Here the pin is connected to the PWM
Serial.begin(9600);// This start serial communication in order for the arduino could send out
commands through the USB connection.
}
void loop()
{
int potRead = analogRead(A0);// Using the analog read from pin A0 to read the value
Serial.println(potRead);
int moSpeed = map(potRead,0,1023,0,255);
analogWrite(11, moSpeed);// Using the PWM pin 11 that can cause the Motor to speed up or
down.
int pootRead = analogRead(A1);// Using the analog read from pin A0 to read the value
Serial.println(pootRead);
int mooSpeed = map(pootRead,0,1023,0,255);//Using the analogwrite commands all the way
to 0 to 255
analogWrite(10, mooSpeed);// Using the PWM pin 10 that can cause the Motor to speed up or
down.
}
