/*
 * softwareTimer.h
 *
 *  Created on: Mar 29, 2024
 *      Author: ngtrunghieu
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#include <stdint.h>
#include "tim.h"

void initializeTimer2(void);
uint8_t getFlagTimer2(void);
void setTimer2(uint32_t duration);


#endif /* INC_SOFTWARETIMER_H_ */
