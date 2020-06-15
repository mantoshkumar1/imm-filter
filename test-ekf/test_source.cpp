#include "pch.h"
#include "../ekf/Source.cpp"

//TEST(TestCaseName, TestName) {
TEST(SumTest, PositiveValues) {
  EXPECT_EQ(sum(2, 3), 5);
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
