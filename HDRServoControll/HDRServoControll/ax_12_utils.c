/*
 * ax_12_utils.c
 *
 * Created: 21.1.2017. 19:27:48
 *  Author: Juraj Pejnovic
 */ 

 #include "ax_12_utils.h"

 unsigned short positionFromAngle(unsigned short angle){
	unsigned short remainder;

	if(angle > AX_ANGLE_LIMIT_LOWER && angle < AX_ANGLE_LIMIT_UPPER){
		if(angle < AX_ANGLE_LIMIT_LOWER + AX_ANGLE_LIMIT_UPPER - AX_ANGLE_LIMIT_LOWER){
			angle = AX_ANGLE_LIMIT_LOWER;
		} else {
			angle = AX_ANGLE_LIMIT_UPPER;
		}
	}

	if(angle <= AX_ANGLE_LIMIT_LOWER){
		angle *= AX_ANGLE_MOTOR_RATIO;
		remainder = angle % 10;
		if(remainder >= 5) {
			angle += 10 - remainder;
		} else {
			angle -= remainder;
		}
		angle /= 10;
	
		return angle + AX_ANGLE_START_OFFSET;

	} else {
		angle -= AX_ANGLE_LIMIT_UPPER;
		angle *= AX_ANGLE_MOTOR_RATIO;
		remainder = angle % 10;
		if(remainder >= 5) {
			angle += 10 - remainder;
			} else {
			angle -= remainder;
		}
		angle /= 10;
		
		return angle;	
	}
}


