/*
 * Hz_convert.c
 *
 *  Created on: Sep 26, 2018
 *      Author: Mike Sorce
 */

//This code will accept a desired frequency value and divider to be used,
//and output a value that the capture compare compare register will be assigned to.
//This performs an operation with the divider, CCR0, and operating frequency of the SMCLK (1MHz)
//To get the timer to operate at the desired Hz

int HzConverter(int Hz_val, int div, int clkinit)//accepts 2 int, desired frequency and divider being used
{
    //base frequency is 1Mhz for SMCLK, 32kHz for Aclk
    //div = 1, 2, 4, 8
    int CCR0_val = 0;

    //Preset 1 is SMCLK
    //Preset 2 is ACLK

    if(clkinit == 1)
    {
        CCR0_val = 1000000/(div * Hz_val);
    }
    else if(clkinit == 2)
    {
        CCR0_val = 32767/(div * Hz_val);
    }
    else
    {
        CCR0_val = clkinit/(div * Hz_val);
    }

    return CCR0_val;
}
