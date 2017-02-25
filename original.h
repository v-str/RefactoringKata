#ifndef ORIGIN_H
#define ORIGIN_H

#include <vector>

struct Point {
  int x = 0;
  int y = 0;
};

const std::vector<Point> extractPoints_1(std::vector<Point> &Points);

#endif  // ORIGIN_H
