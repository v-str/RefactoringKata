#include <original.h>

#include <math.h>
#include <stdexcept>

const std::vector<Point> extractPoints_1(std::vector<Point> &Points) {
  std::vector<Point> empty_vector;  // Extracted points
  unsigned int QQ = 0;
  unsigned int pp = 0;
  unsigned int l = 0;

  if (Points.size() == 0) {
    return empty_vector;
  }

  for (std::size_t i = 1; i != Points.size(); i++) {
    if (Points[i - 1].y < 0 && Points[i].y >= 0) {
      pp = i;
      break;
    }
  }

  for (std::size_t i = 0; i < Points.size() - 1; ++i) {
    if (Points[i].y >= 0 && Points[i + 1].y < 0) {
      QQ = i;
      break;
    }
  }

  if (pp == QQ) {
    if ((*Points.begin()).y >= 0) {
      return Points;
    } else {
      return empty_vector;
    }
  }

  l = pp;

  while (l != QQ) {
    if (Points[l].y < 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++l >= Points.size()) l = 0;  // some magic
  }

  l = QQ;

  while (l != pp) {
    if (Points[l].y >= 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++l >= Points.size()) l = 0;  // some magic
  }

  return std::move(empty_vector);  // move Result
}
