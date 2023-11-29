#include <gtest/gtest.h>
#include "mymath.h"

TEST(MyMathTest, TestDivide) {
    EXPECT_EQ(divide(6, 2), 3);
    EXPECT_EQ(divide(-6, 3), -2);
    EXPECT_EQ(divide(0, 5), 0);
    // Add more divide tests as needed
}
