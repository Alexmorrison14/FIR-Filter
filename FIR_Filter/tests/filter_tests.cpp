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
    class TestFirImpuleResponse: public ::testing::Test
    {
        void SetUp() override
        {
            reset_input_values();
        }
    };
}



TEST_F(TestFirImpuleResponse, firFilter_givesValueOf5_53_whenFirstValueOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 5.531572);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf15_67_whenFirstTwoValuesOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 15.673535);
}


TEST_F(TestFirImpuleResponse, firFilter_givesValueOf43_86902_whenFirstThreeValuesOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 43.86902);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf79_86207_whenFirstFourValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 79.86207);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf105_0638_whenFirstFiveValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 105.0638);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf105_0638_whenFirstSixValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 105.0638);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf79_86207_whenFirstSevenValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 79.86207);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf43_86902_whenFirstEightValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 43.86902);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf15_67_whenFirstNineValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 15.673535);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf5_53_whenFirstTenValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);


    EXPECT_FLOAT_EQ(value, 5.531572);
}

TEST_F(TestFirImpuleResponse, firFilter_givesValueOf0_whenFirstElevenValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(500);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);
    value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 0);
}

namespace
{
    class TestFirStepResponse: public ::testing::Test
    {
        void SetUp() override
        {
            reset_input_values();
        }
    };
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf0_whenFirstValueOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(0);

    EXPECT_FLOAT_EQ(value, 0);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf5_53_whenFirstTwoValuesOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 5.531572038);
}


TEST_F(TestFirStepResponse, firFilter_givesValueOf21_20whenFirstThreeValuesOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 21.20510768);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf79_86207_whenFirstFourValuesOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 65.07412473);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf105_0638_whenFirstFiveValuesOfImpulseFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 144.936196);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf105_0638_whenFirstSixValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 250);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf79_86207_whenFirstSevenValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 355.063804);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf43_86902_whenFirstEightValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 434.9258753);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf15_67_whenFirstNineValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 478.7948923);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf5_53_whenFirstTenValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);


    EXPECT_FLOAT_EQ(value, 494.468428);
}

TEST_F(TestFirStepResponse, firFilter_givesValueOf0_whenFirstElevenValuesOfStepFunctionFedIn)
{
    float value = call_fir_filter(0);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);
    value = call_fir_filter(500);

    EXPECT_FLOAT_EQ(value, 500);
}


