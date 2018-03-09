#include <test.h>

#include <iostream>

TEST(FunctionTest, sizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST(FunctionTest, getNanPoint) {
  std::vector<Point> temp_vector;

  for (int i = 0; i < 10; ++i) {
    Point point;
    point.x = i + 1;
    point.y = i + 1;
    if (i % 2 == 0) {
      point.y *= -i;
    }
    temp_vector.push_back(point);
  }

  std::vector<Point> result_vector = extractPoints_1(temp_vector);

  EXPECT_EQ(result_vector.size(), 1);
  EXPECT_EQ(result_vector.at(0).x, -2147483648);
  EXPECT_EQ(result_vector.at(0).y, -2147483648);
}
