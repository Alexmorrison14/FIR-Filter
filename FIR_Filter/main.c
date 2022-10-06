/*
 * main.c
 *
 *  Created on: 6 Oct 2022
 *      Author: amorrison
 */

#include <msp430.h>

#include "fir_filter.h"


int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
//  int impulse_data[10] = {0, 0, 0, 0, 500, 0, 0, 0, 0, 0};
//  int step_data[10] = {0, 0, 0, 0, 0, 500, 500, 500, 500, 500};
//  float output_data[10] = {0};
//  for (index = 0; index <=10; index++)
//  {
//      output_data[index] = fir_filter(impulse_data[index]);
//  }
    fir_filter(1);

    return 0;
}



