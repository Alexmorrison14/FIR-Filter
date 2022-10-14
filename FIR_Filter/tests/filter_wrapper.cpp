/*
 * filter_wrapper.cpp
 *
 *  Created on: 6 Oct 2022
 *      Author: amorrison
 */

#include "filter_wrapper.h"

#include "../fir_filter.c"

float call_fir_filter(float data)
{
    return fir_filter(data);
}

void reset_input_values(void)
{
    for(int i =0; i<60; i++)
    {
        input[i] = 0;
    }

}
