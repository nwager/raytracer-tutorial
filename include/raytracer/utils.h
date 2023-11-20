#pragma once

#include <cmath>
#include <limits>
#include <memory>
#include <random>

// Constants

const double INF = std::numeric_limits<double>::infinity();
const double PI = 3.1415926535897932385;

// Utility functions

inline double deg2rad(double degrees) {
  return degrees * PI / 180.0;
}

inline double random_double() {
  // Returns a random real in [0,1)
  return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
  return min + (max-min)*random_double();
}
