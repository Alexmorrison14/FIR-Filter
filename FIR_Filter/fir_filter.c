
#ifndef UNIT_TESTING
#include <msp430.h> 
#include "fir_filter.h"
#endif

#define INPUT_LENGTH 10
#define FILTER_LENGTH 10

static float b[10] = {0.0110631440768700,
               0.0313470712799202,
               0.0877380341023896,
               0.159724142609811,
               0.210127607931010,
               0.210127607931010,
               0.159724142609811,
               0.0877380341023896,
               0.0313470712799202,
               0.0110631440768700
};

static float input[60] = {0};

float fir_filter(float data)
{
    float tmp = 0;

    for (int i = (INPUT_LENGTH - 1); i>0; i-- )
    {
        input[i] = input[i-1];

    }

    input[0] = data;

    for (int j = 0; j < FILTER_LENGTH; j++)
    {
        tmp += b[j] * input[j];
    }
    return (tmp);

}
