#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>

#include <original.h>

class OriginalTestFixture : public ::testing::Test {
 public:
  virtual void SetUp() {
    point_.x = 10;
    point_.y = 20;
  }

  virtual void TearDown() {}

  const Point GetPoint() { return point_; }

 private:
  Point point_;
};

#endif  // TEST_H
