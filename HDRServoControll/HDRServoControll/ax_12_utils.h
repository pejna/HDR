/*
 * Utility functions for using AX-12 motors.
 *
 * Created: 21.1.2017. 19:27:23
 *  Author: Peda
 */ 


#ifndef AX_12_UTILS_H_
#define AX_12_UTILS_H_

//utility bool typedef
# ifndef BOOL
#define BOOL

typedef unsigned char bool;

#define TRUE						(1)
#define FALSE						(0)

# endif

#define AX_POSITION_MINIMUM			(0)
#define AX_POSITION_MAXIMUM			(1023)
#define AX_POSITION_MIDDLE			(512)
#define AX_POSITION_X_POSITIVE		(205)
#define AX_POSITION_X_NEGATIVE		(819)

//value is 10 times that of the angle, e.g. angle of 24,5 deg is 245
//change these limits if 0 deg is not on the x axis of the motor's rotor
#define AX_ANGLE_LIMIT_LOWER		(1500)
#define AX_ANGLE_LIMIT_UPPER		(2100)

//1 deg is 3,41 in motor units
//change this if 0 deg is not on the x axis of the motor's rotor
#define AX_ANGLE_START_OFFSET		(205)

#define AX_ANGLE_MOTOR_RATIO		(3.41f)


unsigned short positionFromAngle(unsigned short angle);

#endif /* AX_12_UTILS_H_ */