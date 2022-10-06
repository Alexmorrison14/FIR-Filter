
#ifndef UNIT_TESTING
#include <msp430.h> 
#include "fir_filter.h"
#endif



static unsigned int i = 0;

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

static float input[10] = {0};

float fir_filter(float data)
{
    float tmp = 0;
    input[i] = data;

    for (int j = 0; j < 10; j++)
    {
        tmp += b[j] * input[j];
    }

    if (i >= 10)
    {
         i = 0;
         tmp = 0;
    }
    else
    {
        i++;
    }


    return (tmp);

}
