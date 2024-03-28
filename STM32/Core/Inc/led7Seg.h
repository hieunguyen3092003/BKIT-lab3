/*
 * led7Seg.h
 *
 *  Created on: Mar 29, 2024
 *      Author: ngtrunghieu
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

/* Includes */
#pragma once
#include <stdint.h>
#include "spi.h"

/* Variables */

/* Functions */
void intialize7Seg(void);
void led_7seg_set_digit(int num, int position, uint8_t show_dot);
void led_7seg_set_colon(uint8_t status);
/*
 * Should be called every 1 ms
 * --> This function is called by default in timer 4 callback function (software_timer.cpp)
 */
void led_7seg_display();

void led_7seg_debug_turn_on(uint8_t index);
void led_7seg_debug_turn_off(uint8_t index);

#endif /* INC_LED7SEG_H_ */
