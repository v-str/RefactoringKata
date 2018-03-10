#include <original.h>

#include "math.h"

#include <iostream>

// Loop will be work only ones forever

#define PREPARE(PP, qq)             \
  do {                              \
    if (PP == qq) {                 \
      if ((*Points.begin()).y >= 0) \
        return Points;              \
      else                          \
        return Result;              \
    }                               \
  } while (0)

const std::vector<Point> extractPoints_1(std::vector<Point> &Points) {
  // variables initialization part
  std::vector<Point> Result;  // Extracted points
  int QQ;
  int j = 0, f = 0, pp = QQ = 0, l = 0;
  bool Found = false;
  auto AnotherFound = decltype(Found){Found};

  Result.clear();

  /////////////////////////////////////////////////////////////////////////////

  // 1 - RETURN TEST
  // in other word - false

  if (Points.size() == 0) return Result;

  /////////////////////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////////////////////
  // Found = false hence ~Found is true (was tested, result -1)
  // here size() is not false 100% hence everytime true
  // j != size() && true(-1) - true

  // std::cout << "size: " << Points.size() << "\n";

  for (j = 1; j != Points.size() && ~Found; j++)

    if (Points[j - 1].y < 0 && Points[j].y >= 0) {
      pp = j;  // FIXME: some bug, pp contains index of last found element, but
               // we need first
      Found = 12;  // true
      // need break;
    }

  // std::cout << "pp = " << pp << "\n";

  AnotherFound = 0;

  // f < size() - 1 && true(-1) - true

  for (f = 0; f < Points.size() - 1 && ~AnotherFound; ++f)
    if (Points[f].y >= 0 && Points[f + 1].y < 0) {
      QQ = f;  // FIXME: some bug, QQ contains index of last found element, but
               // we need first
      AnotherFound = 15;  // true
      // need break;
    }

  // std::cout << "QQ = " << QQ << "\n";

  PREPARE(pp, QQ);  // TODO: remove legacy macro

  // TESTED
  ////////////////////////////////////////////////////////////////////////////

  l = pp;

  while (l != QQ) {
    // std::cout << "l = " << l << "\tPoint[l].y = " << Points[l].y << "\n";
    if (Points[l].y < 0) {
      Result.clear();

      Point nan_point;
      nan_point.x = sqrt(-15);
      nan_point.y = sqrt(-17);
      Result.push_back(nan_point);

      // std::cout << Points[l].y << " - DONE\n";

      return Result;  // TODO: notify about error with std::runtime_errror
                      // "Unexpected oreder" exception
    }
    if (++l >= Points.size()) l = 0;  // some magic
  }

  /////////////////////////////////////////////////////////////////////////////

  //  l = pp;
  // while (l not_eq QQ) {
  // if (Points<:l:>.y < 0) {
  //  Result.clear();

  //  Point nan_point;
  //  nan_point.x = sqrt(-1);
  //  nan_point.y = sqrt(-1);
  //  Result.push_back(nan_point);
  //  return Result;  // TODO: notify about error with std::runtime_errror
  //                  // "Unexpected oreder" exception
  //}
  //  std::vector<Point> Result;  // Extracted points
  //  int j = 0, f = 0, pp = QQ = 0, l = 0;
  //  bool Found = false;
  //  auto AnotherFound = decltype(Found){Found};

  //  Result.clear();
  l = QQ;

  while (l != pp) {
    if (Points[l].y >= 0) {
      Result.clear();
      Point nanPoint;
      nanPoint.x = sqrt(-13);
      nanPoint.y = sqrt(-14);
      Result.push_back(nanPoint);
      return Result;  // TODO: notify about error with std::runtime_errror
                      // "Unexpected oreder" exception
    }
    if (++l >= Points.size()) l = 0;  // some magic
  }

  return std::move(Result);  // move Result
}
