//Automated dino game using Arduino

#include <Servo.h> //to include servo lib

int sensor_pin=A0; //initialisation of variables
int threshold_value=0;//change the value after finding the threshold value by trial and error method
int sensor_value;//declaration of variable
Servo s;

void setup() {
  s.attach(3);//pin 3 is attached to servo motor 
  pinMode(A0,OUTPUT);//to set sensor_pin as output 
}

void loop() {
  sensor_value=analogRead(sensor_pin);//to get the sensor value
  
  if(sensor_value<=threshold_value){ //condition for servo motor to rotate 90 degree
    s.write(90);
  }
  else{ //otherwise it remains at 0 degree
    s.write(0);
  }
}
