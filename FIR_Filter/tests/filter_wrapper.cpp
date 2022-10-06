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
