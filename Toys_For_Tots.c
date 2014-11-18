/*
  Toys_For_Tots.c
  This program will enable Roberta to pick a present up off a table.  
*/

#include "simpletools.h"                      // Include simple tools
#include "servo.h"                            //this program uses servo motors

//Assign pins to the different body parts
#define LeftKnee 1
#define RightKnee 2
#define LeftHip 6
#define RightHip 7
#define LeftRotator 12
#define LeftShoulder 13
#define LeftElbow 14
#define RightRotator 15
#define RightShoulder 16
#define RightElbow 17
#define Head 8

//Function Declarations
     void SetMotorSpeed(void);
     void startingPos(void);
     void squeezePres(void);
     void liftPres(void);
 int speed = 5; //sets the speed at which servos will turn
  
int main() // Main function
{
   startingPos();
   SetMotorSpeed();
   pause(5000);
   squeezePres();
   pause(5000);
   liftPres();
}

void startingPos() //Sets the robot to a starting position before the initial movement
{
  servo_angle(LeftRotator, 0);
  servo_angle(LeftShoulder, 180);
  servo_angle(LeftElbow, 1750); 
  servo_angle(RightRotator, 1830); 
  servo_angle(RightShoulder, 1730); 
  servo_angle(RightElbow, 0);
}

void squeezePres() //Brings the robot to a position able to squeeze the present, then squeezes it 
{
  servo_angle(LeftRotator, 1200);
  servo_angle(LeftShoulder, 530);
  servo_angle(LeftElbow, 1750); 
  servo_angle(RightRotator, 840); 
  servo_angle(RightShoulder, 1350); 
  servo_angle(RightElbow, 0);
}

void liftPres() //Rotate the shoulders to a position that hands the marine the present
{
  servo_angle(LeftRotator, 1300);
  servo_angle(LeftShoulder, 1700);
  servo_angle(LeftElbow, 1750); 
  servo_angle(RightRotator, 850); 
  servo_angle(RightShoulder, 320); 
  servo_angle(RightElbow, 0);
}

void SetMotorSpeed(void) //Sets the speed of the motors
{
   
   servo_setramp(LeftHip,speed);
   servo_setramp(LeftKnee,speed);
   servo_setramp(LeftRotator,speed);
   servo_setramp(LeftShoulder,speed);
   servo_setramp(LeftElbow,speed);
   
   servo_setramp(RightHip,speed);
   servo_setramp(RightKnee,speed);
   servo_setramp(RightRotator,speed);
   servo_setramp(RightShoulder,speed);
   servo_setramp(RightElbow,speed); 
}
