/*
 * Hz_convert.h
 *
 *  Created on: Sep 26, 2018
 *      Author: Mike Sorce
 */

//This code will accept a desired frequency value and divider to be used,
//and output a value that the capture compare compare register will be assigned to.
//This performs an operation with the divider, CCR0, and operating frequency of the SMCLK (1MHz)
//To get the timer to operate at the desired Hz
#ifndef HZ_CONVERT_H_
#define HZ_CONVERT_H_

    int HzConverter(int Hz_val, int div);

#endif /* HZ_CONVERT_H_ */
