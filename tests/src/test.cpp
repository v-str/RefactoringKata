#include <test.h>

#include <stdexcept>
#include <string>

#include <gtest/gtest.h>

#include <iostream>

using namespace function_test;

static const int kVectorSize = 6;
static const int kNull = 0;

TEST(FunctionTest, SizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(extractPoints_1(temp_vector).size(), 0);
}

TEST(FunctionTest, GetEmptyVector1) {
  vector<Point> test_vector;

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

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector2) {
  vector<Point> test_vector;

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

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), 0);
}

TEST(FunctionTest, GetEmptyVector3) {
  vector<Point> test_vector;

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
  vector<Point> test_vector;

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

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector5) {
  vector<Point> test_vector;

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

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetSameVector) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 92;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    test_vector.push_back(Point(temp_point));
    std::cout << temp_point.y << " ";
  }

  std::cout << "\n";

  vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), test_vector.size());

  for (unsigned int i = 0; i < result_vector.size(); ++i) {
    EXPECT_EQ(result_vector[i].y, test_vector[i].y);
  }
}

TEST(FunctionTest, GetSameVector2) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = -1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(temp_point);
  }

  std::cout << "\n";

  vector<Point> result_vector = extractPoints_1(test_vector);

  for (std::size_t i = 0; i < result_vector.size(); ++i) {
    if (result_vector.at(i).y > 0) {
      EXPECT_EQ(result_vector[i].y, 1);
    } else {
      EXPECT_EQ(result_vector[i].y, -1);
    }
  }
}

TEST(FunctionTest, GetRunTimeError) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 3 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError2) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 2 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError3) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = -1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 4) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(temp_point);
  }

  std::cout << "\n";

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError4) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 3 || i == 4 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError5) {
  vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 5 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), string("Unexpected order"));
  }
}
