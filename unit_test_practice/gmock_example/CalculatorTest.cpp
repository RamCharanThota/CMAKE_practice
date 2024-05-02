#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockCalculator.hpp"

TEST(CalculatorTest, Add) {
    // Create a mock object
    MockCalculator mockCalculator;

    // Define expectations
    EXPECT_CALL(mockCalculator, add(2, 3))
        .WillOnce(testing::Return(5));
    EXPECT_CALL(mockCalculator, add(-1, 1))
        .WillOnce(testing::Return(0));

    // Test the functionality that uses the Calculator
    // For example, we could call a function that uses the Calculator as a dependency
    // and verify that it behaves correctly based on the mocked add method.
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
