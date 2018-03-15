#include <test.h>

TEST(FunctionTest, GetSameVector1) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 92;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), test_vector.size());

  for (unsigned int i = 0; i < result_vector.size(); ++i) {
    EXPECT_EQ(result_vector[i].y, test_vector[i].y);
  }
}

TEST(FunctionTest, GetSameVector2) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = -1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(temp_point);
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  for (unsigned int i = 0; i < result_vector.size(); ++i) {
    EXPECT_EQ(result_vector[i].y, test_vector[i].y);
  }
}
