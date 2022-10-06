/*
 * filter_tests.cpp
 *
 *  Created on: 6 Oct 2022
 *      Author: amorrison
 */
#include "gtest/gtest.h"

#include "filter_wrapper.h"

namespace
{
    class TestFirFilter : public ::testing::Test
    {
        void SetUp() override
        {
        }
    };
}



TEST_F(TestFirFilter, firFilterWorks)
{
    float value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 5.531572);
}

