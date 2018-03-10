#include <test.h>

using namespace function_test;

TEST(FunctionTest, sizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST(FunctionTest, getEmptyVector) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 0;
  temp_point.y = -1;
  test_vector.push_back(Point(temp_point));
  temp_point.x = 1;
  temp_point.y = 2;
  test_vector.push_back(Point(temp_point));
  temp_point.x = 1;
  temp_point.y = -2;
  test_vector.push_back(Point(temp_point));

  for (unsigned int i = 0; i < test_vector.size(); ++i) {
    std::cout << i << ") " << test_vector[i].x << " " << test_vector[i].y
              << endl;
  }

  cout << endl;

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), 0);
}
