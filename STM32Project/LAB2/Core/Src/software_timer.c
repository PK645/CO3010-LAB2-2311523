/*
 * software_timer.c
 *
 *  Created on: Oct 7, 2025
 *      Author: khanh
 */

/*
 * software_timer.c
 *
 *  Created on: Sep 24, 2025
 *      Author: khanh
 */

#include "software_timer.h"

int timer0_counter = 0;
int timer0_flag = 0;

void setTimer0(int duration) {
	timer0_counter = duration;
	timer0_flag = 0;
}

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration) {
	timer1_counter = duration;
	timer1_flag = 0;
}

int timer2_counter = 0;
int timer2_flag = 0;

void setTimer2(int duration) {
	timer2_counter = duration;
	timer2_flag = 0;
}

void runTimer() {
	if (timer0_counter > 0) {
		timer0_counter --;
		if (timer0_counter <= 0) {
			timer0_flag = 1;
		}
	}
	if (timer1_counter > 0) {
		timer1_counter --;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}
	if (timer2_counter > 0) {
		timer2_counter --;
		if (timer2_counter <= 0) {
			timer2_flag = 1;
		}
	}
}
