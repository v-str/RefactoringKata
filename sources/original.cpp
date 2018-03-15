#include <original.h>

#include <algorithm>
#include <stdexcept>

const std::vector<Point> ExtractPositivePoints(
    const std::vector<Point> &Points) {
  bool is_all_elements_positive =
      std::all_of(Points.begin(), Points.end(),
                  [](const Point &point) { return point.y >= 0; });

  unsigned int amount_of_positive_values =
      std::count_if(Points.begin(), Points.end(),
                    [](const Point &point) { return point.y >= 0; });

  if (is_all_elements_positive) {
    return Points;
  }

  if (Points.begin()->y >= 0 && amount_of_positive_values == 1) {
    return Points;
  }

  if (Points.begin()->y >= 0 && amount_of_positive_values > 1) {
    throw std::runtime_error("Unexpected order");
  }

  return std::move(std::vector<Point>());
}
