#include <original.h>

#include <math.h>
#include <stdexcept>

#include <iostream>

const std::vector<Point> extractPoints_1(const std::vector<Point> &Points) {
  if (Points.empty()) {
    return std::vector<Point>();
  }

  unsigned int first_before_negative = 0;

  for (std::size_t i = 0; i < Points.size() - 1; ++i) {
    if (Points[i].y >= 0 && Points[i + 1].y < 0) {
      first_before_negative = i;
      break;
    }
  }

  unsigned int first_after_negative = 0;

  for (std::size_t i = 1; i != Points.size(); i++) {
    if (Points[i - 1].y < 0 && Points[i].y >= 0) {
      first_after_negative = i;
      break;
    }
  }

  std::cout << "\nfirst before negative: " << first_before_negative << "\n"
            << "first after negative: " << first_after_negative << "\n\n";

  if (first_before_negative == first_after_negative) {
    if ((*Points.begin()).y >= 0) {
      return Points;
    } else {
      return std::vector<Point>();
    }
  }

  unsigned int temp = first_before_negative;

  while (temp != first_after_negative) {
    std::cout << "temp = " << temp << "\n\n";
    if (Points[temp].y >= 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++temp >= Points.size()) temp = 0;  // some magic
  }

  return std::move(std::vector<Point>());  // move Result
}
