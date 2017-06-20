
#include <hmc6343.h>
#include <Wire.h>

hmc6343 hmc;                    //Creates an instance of the hmc6343 class called hmc

float x,y,z,heading,roll,pitch,temperature;     //Variables to store values returned from the HMC6343 library
 
void setup() {
  Serial.begin(9600); 
  
}
 
void loop() {

  hmc.readAcc(x,y,z);               //Library returns accelerometer values to variable x, y and z.
  
  Serial.println("Accelerometer values: ");   
  Serial.print("x: ");
  Serial.print(x);
  Serial.print(" y: ");
  Serial.print(y);
  Serial.print(" z: ");
  Serial.print(z);
  Serial.println("\n");
  
  hmc.readMag(x,y,z);               //Library returns magnetometer values to variable x, y and z.
  
  Serial.println("Magnetometer values: ");
  Serial.print("x: ");
  Serial.print(x);
  Serial.print(" y: ");
  Serial.print(y);
  Serial.print(" z: ");
  Serial.print(z);
  Serial.println("\n");
  
  hmc.readHeading(heading, roll, pitch);      //Library returns Heading, Roll and Pitch to variable heading, roll and pitch.
  
  Serial.println("Heading values: ");
  Serial.print("Heading: ");
  Serial.print(heading);
  Serial.print(" Roll: ");
  Serial.print(roll);
  Serial.print(" Pitch: ");
  Serial.print(pitch);
  Serial.println("\n");
  
  hmc.readTemp(temperature);            //Library returns temperature to the temperature variable
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("\n");
  
  delay(1000);                  //Waits one second
}

