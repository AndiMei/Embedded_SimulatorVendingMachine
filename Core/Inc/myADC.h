/*
 * myADC.h
 *
 *  Created on: Dec 1, 2019
 *      Author: Andi
 */

#ifndef INC_MYADC_H_
#define INC_MYADC_H_

#include "main.h"

uint32_t buffAdc;
ADC_HandleTypeDef hadc1;
void myADC_init(void);
void myADC_Start(void);
uint32_t myADC_read(void);



#endif /* INC_MYADC_H_ */
