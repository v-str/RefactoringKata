#ifndef TEST_H
#define TEST_H

#include <vector>

#include <gtest/gtest.h>

#include <original.h>

class OriginalTestFixture : public ::testing::Test {
 public:
  virtual void SetUp() {
    for (auto i = 0; i < 10; ++i) {
      Point point;
      point.x = i + 1;
      point.y = i + 1;
      if (i % 2 == 0) {
        point.y *= -i;
      }
      points_.push_back(point);
    }
  }

  virtual void TearDown() {}

  std::vector<Point>& GetPoints() { return points_; }

 private:
  std::vector<Point> points_;
};

#endif  // TEST_H
