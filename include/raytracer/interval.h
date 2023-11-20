#pragma once

#include "raytracer/utils.h"

class interval {
 public:
  double min, max;

  interval() : min(+INF), max(-INF) {};
  interval(double _min, double _max) : min(_min), max(_max) {}

  inline bool contains(double x) const {
    return min <= x && x <= max;
  }

  inline bool surrounds(double x) const {
    return min < x && x < max;
  }

  inline double clamp(double x) const {
    return x > max ? max : (x < min ? min : x);
  }

  static const interval empty, universe;
};

const static interval empty   (+INF, -INF);
const static interval universe(-INF, +INF);
