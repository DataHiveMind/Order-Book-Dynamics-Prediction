#include "lib/utils.hpp"
#include <gtest/gtest.h>

TEST(UtilsTest, CalculateMovingAverage) {
    std::vector<float> prices = {1, 2, 3, 4, 5};
    std::vector<float> expected = {2.0, 3.0, 4.0};
    EXPECT_EQ(calculate_moving_average(prices, 3), expected);
}
