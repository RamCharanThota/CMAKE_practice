
#include <gtest/gtest.h>

int sum(int a,int b){
    return a+b;
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// my test1
TEST(SimpleFunTests, sumfunTest){
    EXPECT_EQ(sum(1,1), 2);
    EXPECT_EQ(sum(2,3), 5);
}


TEST(SimpleFunTests, sumfunTesttwo){
    EXPECT_EQ(sum(1,1), 2);
    EXPECT_EQ(sum(2,3), 5);
}