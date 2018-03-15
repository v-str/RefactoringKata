#include <test.h>

TEST(FunctionTest, GetRunTimeError1) {
  std::cout << "\n\n\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(temp_point);
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

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
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError13) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError14) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError15) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError16) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError17) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError18) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}

TEST(FunctionTest, GetRunTimeError19) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }
    std::cout << temp_point.y << " ";

    test_vector.push_back(Point(temp_point));
  }

  std::cout << "\n";

  try {
    std::vector<Point> result_vector = extractPoints_1(test_vector);
  } catch (std::runtime_error& error) {
    EXPECT_EQ(error.what(), std::string("Unexpected order"));
  }
}
