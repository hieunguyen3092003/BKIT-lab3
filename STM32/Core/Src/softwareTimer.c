/*
 * softwareTimer.c
 *
 *  Created on: Mar 29, 2024
 *      Author: ngtrunghieu
 */

#include "softwareTimer.h"

uint32_t timer2_counter = 0;
uint8_t timer2_flag = 0;

void initializeTimer2(void)
{
	HAL_TIM_Base_Start_IT(&htim2);
}

uint8_t getFlagTimer2(void)
{
	return timer2_flag;
}

void setTimer2(uint32_t duration)
{
	timer2_counter = duration;
	timer2_flag = 0;
}

void timerRun()
{
	if(timer2_counter > 0)
	{
		--timer2_counter;
	}
	if(timer2_counter <= 0)
	{
		timer2_flag = 1;
	}
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	timerRun();
}


