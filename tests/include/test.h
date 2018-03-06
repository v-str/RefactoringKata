#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>

#include <original.h>

class OriginalTestFixture : public ::testing::Test {
 public:
  OriginalTestFixture(const Point& point) : point_(point) {}

 private:
  Point point_;
};

#endif  // TEST_H
