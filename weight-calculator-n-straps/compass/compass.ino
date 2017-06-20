
#include <hmc6343.h>
#include <Wire.h>

hmc6343 hmc;                   

float x,y,z,heading,roll,pitch,temperature,result,accel_angle_x,accel_angle_y;     
 
void setup() {
  Serial.begin(9600); 
  
}
 
void loop() {

  hmc.readAcc(x,y,z);               
  
  Serial.println("Accelerometer values: ");   
  Serial.print("x: ");
  Serial.print(x);
  Serial.print(" y: ");
  Serial.print(y);
  Serial.print(" z: ");
  Serial.print(z);
  Serial.println("\n");

  result = sqrt((y*y)+(z*z));
  result = x/result;
  accel_angle_x = atan(result);
  accel_angle_x = (accel_angle_x*180)/PI;

  result = sqrt((x*x)+(z*z));
  result = y/result;
  accel_angle_y = atan(result);
  accel_angle_y = (accel_angle_y*180)/PI;

  Serial.println("Angle value: ");   
  Serial.print("x: ");
  Serial.println(accel_angle_x);
  Serial.print("y: ");
  Serial.println(accel_angle_y);
  Serial.println("\n");

  delay(2000);                 
}

