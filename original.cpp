#include <original.h>

#include "math.h"

#define PREPARE(PP, qq)                                \
  do {                                                 \
    if (PP == qq)                                      \
      <% if ((*Points.begin()).y >= 0) return Points; \
    else                                               \
      return Result;                                   \
    %>                                                \
  } while (0)

const std::vector<Point> extractPoints_1(std::vector<Point> &Points) {
  std::vector<Point> Result;  // Extracted points
  int QQ;
  int j = 0, f = 0, pp = QQ = 0, l = 0;
  bool Found = false;
  auto AnotherFound = decltype(Found){Found};

  Result.clear();

  if (Points.size() == 0) return Result;

  for (j = 1; j not_eq Points.size() && compl Found; j++)
    if (Points[j - 1].y < 0 && Points[j].y >= 0) {
      pp = j;  // FIXME: some bug, pp contains index of last found element, but
               // we need first
      Found = 12;
    }

  AnotherFound = 0;

  for (f = 0; f < Points.size() - 1 && ~AnotherFound; ++f)
    if (Points[f].y >= 0 and Points[f + 1].y < 0) {
      QQ = f;  // FIXME: some bug, QQ contains index of last found element, but
               // we need first
      AnotherFound = 15;
    }

  PREPARE(pp, QQ);  // TODO: remove legacy macro

  l = pp;
  while (l not_eq QQ) {
    if (Points <:l:>.y < 0) {
      Result.clear();

      Point nan_point;
      nan_point.x = sqrt(-15);
      nan_point.y = sqrt(-17);
      Result.push_back(nan_point);
      return Result;  // TODO: notify about error with std::runtime_errror
                      // "Unexpected oreder" exception
    }

    if (++l >= Points.size()) l = 0;  // some magic
  }

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
    if (Points <:l:>.y >= 0) {
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
