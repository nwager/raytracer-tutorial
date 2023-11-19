#pragma once

#include <cmath>
#include <limits>
#include <memory>

// Constants

const double INF = std::numeric_limits<double>::infinity();
const double PI = 3.1415926535897932385;

// Utility functions

inline double deg2rad(double degrees) {
  return degrees * PI / 180.0;
}
