//##########################################################
//##                      H U M O N I S T I               ##
//## CM-510 AX-12A & AX-12+ Motor control program.		  ##
//##                                           2017.01.20.##
//##########################################################


#include <avr/io.h>
#include <avr/interrupt.h>
#include "ax_12.h"
#include "ax_12_utils.h"
#include "dynamixel.h"

#define LED_BAT					(0x01)
#define LED_TxD					(0x02)
#define LED_RxD					(0x04)
#define LED_AUX					(0x08)
#define LED_MANAGE				(0x10)
#define LED_PROGRAM				(0x20)
#define LED_PLAY				(0x40)

#define BTN_UP					(0x10)
#define BTN_DOWN				(0x20)
#define BTN_LEFT				(0x40)
#define BTN_RIGHT				(0x80)
#define BTN_START				(0x01)

#define MAX_MOTORS				(20)

Ax12 motors[MAX_MOTORS];

void initializeAtmel(void);

void initializeMotors(void);

void initializePositions(void);

int main(void) {
	initializeAtmel();
	initializeMotors();
	initializePositions();
	

	while (1){
		if(~PINE & BTN_UP){
			PORTC &= ~LED_MANAGE;

		}else if(~PINE & BTN_DOWN){
			PORTC &= ~LED_PLAY;

		}else if(~PINE & BTN_LEFT){
			PORTC &= ~LED_TxD;

		}else if(~PINE & BTN_RIGHT){
			PORTC &= ~LED_AUX;

		}else if(~PIND & BTN_START){
			PORTC = ~(LED_BAT|LED_TxD|LED_RxD|LED_AUX|LED_MANAGE|LED_PROGRAM|LED_PLAY);
		
		}else {
			PORTC = LED_BAT|LED_TxD|LED_RxD|LED_AUX|LED_MANAGE|LED_PROGRAM|LED_PLAY;
		}
	}

	while(1);

	return 0;
}

void initializeAtmel(){
	DDRC  = 0x7F;
	PORTC = 0x7E;
	DDRD  = 0x70;
	PORTD = 0x11;
	DDRE  = 0x0C;
	PORTE = 0xF0;
}

void initializeMotors(){
	int i;
	for(i = 0; i < MAX_MOTORS; ++i){
		motors[i].id = i + 1;
		updateMotor(&motors[i]);
	}
}

void initializePositions(void){
	unsigned char motor;
	unsigned short position;

	motor = 1;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 2;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 3;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 4;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 5;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 6;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 7;
	position = positionFromAngle(1403);
	setGoalPosition(motor, position);

	motor = 8;
	position = positionFromAngle(503);
	setGoalPosition(motor, position);

	motor = 9;
	position = positionFromAngle(503);
	setGoalPosition(motor, position);

	motor = 10;
	position = positionFromAngle(1297);
	setGoalPosition(motor, position);

	motor = 11;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 12;
	setGoalPosition(motor, AX_POSITION_MIDDLE);

	//motors not yet used
	/*
	motor = 13;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 14;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 15;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 16;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 17;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 18;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 19;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	motor = 19;
		setGoalPosition(motor, AX_POSITION_MIDDLE);

	*/
}