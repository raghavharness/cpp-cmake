#include <gtest/gtest.h>

// Entry point for the test program
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
