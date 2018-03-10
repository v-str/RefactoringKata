#include <test.h>

#include <iostream>

TEST(FunctionTest, sizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST_F(OriginalTestFixture, getNanPoint) {
  std::vector<Point> result_vector = extractPoints_1(GetPoints());

  EXPECT_EQ(result_vector.size(), 1);
  EXPECT_EQ(result_vector.at(0).x, -2147483648);
  EXPECT_EQ(result_vector.at(0).y, -2147483648);
}
