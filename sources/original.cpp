#include <original.h>

#include <math.h>
#include <stdexcept>

const std::vector<Point> extractPoints_1(const std::vector<Point> &Points) {
  if (Points.empty()) {
    return std::vector<Point>();
  }

  unsigned int index_after_negative_value = 0;

  for (std::size_t i = 1; i != Points.size(); i++) {
    if (Points[i - 1].y < 0 && Points[i].y >= 0) {
      index_after_negative_value = i;
      break;
    }
  }

  unsigned int index_before_negative_value = 0;

  for (std::size_t i = 0; i < Points.size() - 1; ++i) {
    if (Points[i].y >= 0 && Points[i + 1].y < 0) {
      index_before_negative_value = i;
      break;
    }
  }

  if (index_after_negative_value == index_before_negative_value) {
    if ((*Points.begin()).y >= 0) {
      return Points;
    } else {
      return std::vector<Point>();
    }
  }

  unsigned int temp = index_after_negative_value;

  while (temp != index_before_negative_value) {
    if (Points[temp].y < 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++temp >= Points.size()) temp = 0;  // some magic
  }

  temp = index_before_negative_value;

  while (temp != index_after_negative_value) {
    if (Points[temp].y >= 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++temp >= Points.size()) temp = 0;  // some magic
  }

  return std::move(std::vector<Point>());  // move Result
}
