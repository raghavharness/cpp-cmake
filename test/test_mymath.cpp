#include <gtest/gtest.h>
#include "mymath.h"

TEST(MyMathTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-2, 3), 1);
    EXPECT_EQ(add(0, 0), 0);
}
