#pragma once

#include <ostream>

class vec3 {
 public:
  double e[3];

  vec3();
  vec3(double e0, double e1, double e2);

  double x() const;
  double y() const;
  double z() const;

  vec3 operator-() const;
  double operator[](int i) const;
  double &operator[](int i);

  vec3 &operator+=(const vec3 &v);
  vec3 &operator*=(const double t);
  vec3 &operator/=(const double t);

  double norm2() const;
  double norm2_sq() const;
};

using point3 = vec3;

// utility functions

std::ostream& operator<<(std::ostream &out, const vec3 &v);
vec3 operator+(const vec3 &u, const vec3 &v);
vec3 operator-(const vec3 &u, const vec3 &v);
vec3 operator*(const vec3 &u, const vec3 &v);
vec3 operator*(double t, const vec3 &v);
vec3 operator*(const vec3 &v, double t);
vec3 operator/(vec3 v, double t);

double dot(const vec3 &u, const vec3 &v);
vec3 cross(const vec3 &u, const vec3 &v);
vec3 unit_vector(vec3 v);

void print_vector(std::ostream &out, const vec3 &v);
