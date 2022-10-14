/*
 * filter_wrapper.h
 *
 *  Created on: 6 Oct 2022
 *      Author: amorrison
 */

#ifndef FILTER_WRAPPER_H_
#define FILTER_WRAPPER_H_


#include "../fir_filter.h"

#define WDTCTL
#define WDTPW 0U
#define WDTHOLD 1U

float call_fir_filter(float data);
void reset_input_values(void);

#endif /* FILTER_WRAPPER_H_ */
