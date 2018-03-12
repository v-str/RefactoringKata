#include <test.h>

#include <stdexcept>
#include <string>

#include <gtest/gtest.h>

#include <iostream>

using namespace function_test;

TEST(FunctionTest, sizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST(FunctionTest, getEmptyVector) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 0;

  for (unsigned int i = 0; i < 6; ++i) {
    if (i == 0 || i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    test_vector.push_back(Point(temp_point));
  }

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), 0);
}

TEST(FunctionTest, getSameVector) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 92;
  temp_point.y = 28;

  for (unsigned int i = 0; i < 5; ++i) {
    test_vector.push_back(Point(temp_point));
  }

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), test_vector.size());

  for (unsigned int i = 0; i < result_vector.size(); ++i) {
    EXPECT_EQ(result_vector[i].y, test_vector[i].y);
  }
}

TEST(FunctionTest, NegativeFirstParameter) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (int i = 0; i < 6; ++i) {
    if (i == 0 || i == 3 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }
    test_vector.push_back(Point(temp_point));
  }

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}

TEST(FunctionTest, PositiveFirstParameter) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (int i = 0; i < 6; ++i) {
    if (i == 1 || i == 2 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}

TEST(FunctionTest, MoveVectorValue) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (int i = 0; i < 6; ++i) {
    if (i == 4 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  EXPECT_EQ(extractPoints_1(test_vector).size(), 0);
}
