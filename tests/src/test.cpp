#include <test.h>

#include <stdexcept>
#include <string>

#include <gtest/gtest.h>

#include <algorithm>
#include <iostream>

static const int kVectorSize = 6;
static const int kNull = 0;

TEST(FunctionTest, SizeTest) {
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
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

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
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

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
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

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
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

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
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

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

    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n\n\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetSameVector1) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 92;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    test_vector.push_back(Point(temp_point));
    // std::cout << temp_point.y << " ";
  }

  // std::cout << "\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

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
    // std::cout << temp_point.y << " ";

    test_vector.push_back(temp_point);
  }

  // std::cout << "\n\n\n";

  std::vector<Point> result_vector = extractPoints_1(test_vector);

  for (unsigned int i = 0; i < result_vector.size(); ++i) {
    EXPECT_EQ(result_vector[i].y, test_vector[i].y);
  }
}

TEST(FunctionTest, GetRunTimeError1) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError2) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = -1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 4 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(temp_point);
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError3) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 3 || i == 4 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError4) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2 || i == 3 || i == 4 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError5) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2 || i == 4 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError6) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2 || i == 3 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError7) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError8) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError9) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError10) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError11) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 2 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError12) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 2 || i == 3 || i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    // std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  // std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}
