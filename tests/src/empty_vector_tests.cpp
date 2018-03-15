#include <test.h>

TEST(FunctionTest, SizeTest) {
  std::cout << "\n\n\n";

  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST(FunctionTest, GetEmptyVector1) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector2) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 0;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), 0);
}

TEST(FunctionTest, GetEmptyVector3) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  EXPECT_EQ(extractPoints_1(test_vector).size(), 0);
}

TEST(FunctionTest, GetEmptyVector4) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector5) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2 || i == 3 || i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector6) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    temp_point.y = -1;

    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector7) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}
