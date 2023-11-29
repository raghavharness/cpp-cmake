#include <gtest/gtest.h>
#include "mymath.h"

TEST(MyMathTest, TestAdvanced) {
    EXPECT_EQ(subtract(2, 3), -1);
    EXPECT_EQ(subtract(-2, 3), -5);
    EXPECT_EQ(subtract(0, 0), 0);
}
