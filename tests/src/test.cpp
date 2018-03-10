#include <test.h>

#include <gtest/gtest.h>

#include <iostream>

using namespace function_test;

TEST(FunctionTest, sizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST(FunctionTest, GetEmptyVector) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 0;
  temp_point.y = -1;
  test_vector.push_back(Point(temp_point));

  temp_point.y = 1;
  test_vector.push_back(Point(temp_point));

  temp_point.y = -1;
  test_vector.push_back(Point(temp_point));

  temp_point.y = 1;
  test_vector.push_back(Point(temp_point));

  temp_point.y = 1;
  test_vector.push_back(Point(temp_point));

  temp_point.y = 1;
  test_vector.push_back(Point(temp_point));

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), 0);
}
