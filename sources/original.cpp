#include <original.h>

#include <math.h>
#include <stdexcept>

const std::vector<Point> extractPoints_1(std::vector<Point> &Points) {
  std::vector<Point> empty_vector;  // Extracted points
  unsigned int QQ = 0;
  unsigned int j = 0;
  unsigned int f = 0;
  unsigned int pp = 0;
  unsigned int l = 0;

  if (Points.size() == 0) {
    return empty_vector;
  }

  for (j = 1; j != Points.size(); j++) {
    if (Points[j - 1].y < 0 && Points[j].y >= 0) {
      pp = j;

      break;
    }
  }

  for (f = 0; f < Points.size() - 1; ++f) {
    if (Points[f].y >= 0 && Points[f + 1].y < 0) {
      QQ = f;

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
