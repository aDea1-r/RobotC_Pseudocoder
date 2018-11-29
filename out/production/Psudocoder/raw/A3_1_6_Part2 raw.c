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
  Project Title: Activity 3.1.6
  Team Members: Adeel, Kush, Lily, Chris
  Date: 11/13/18
  Section: 2


  Task Description: Develop a program that will oscillate the motor each way 20 times. One direction will use the limit
  									switch sensor input. The opposite direction will use a 0.5-second time limit. Begin with the standoff
  									resting against the limit switch. Run the program and observe the final resting place of the indicator
  									standoff. Add comments in your program to explain the purpose of each step. Print the program to submit.
  									Save the program.


  Pseudocode:

*/

task main() {
	for (int i=0; i<20; i++) {
		untilBump(limitSwitch);
		startMotor(rightMotor,64);
		wait(.5);
		startMotor(rightMotor,-64);
		wait(.5);
	}
}
