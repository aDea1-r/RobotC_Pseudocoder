#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: Activity 3.1.5
  Team Members: Adeel, Kush, Lily, Chris
  Date: 11/13/18
  Section: 3


  Task Description: If you have the ultrasonic distance sensor, modify the program so that a variable ?closest? will remember
  									the closest distance detected by the ultrasonic distance sensor. The limit switch should reset the record.


  Pseudocode:

*/

void LEDControl();       //this is a function hideclaration
task main()
{
    while (1==1)
    {
        LEDControl();  //function call
    }
}
void LEDControl()  //function definition
{
    if (SensorValue(bumpSwitch)==1)
    {
        turnLEDOn(green);
    }
    else
    {
        turnLEDOff(green);
    }
}
