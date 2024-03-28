/*
 * button.h
 *
 *  Created on: Mar 29, 2024
 *      Author: ngtrunghieu
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#pragma once
#include <stdint.h>
#include "spi.h"
#include "gpio.h"

/* Variables */
extern uint16_t button_count[16];

/* Functions */
void initializeButton(void);
void button_scan(void);

#endif /* INC_BUTTON_H_ */
