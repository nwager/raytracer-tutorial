#include "raytracer/sphere.h"

#include <cmath>

sphere::sphere(point3 _center, double _radius) : center(_center), radius(_radius) {}

bool sphere::hit(const ray &r, interval ray_t, hit_record &rec) const {
  vec3 oc = r.origin() - center;
  auto a = r.direction().norm2_sq();
  auto half_b = dot(oc, r.direction());
  auto c = oc.norm2_sq() - (radius * radius);
  auto discriminant = half_b*half_b - a*c;

  if (discriminant < 0) return false;
  auto sqrtd = sqrt(discriminant);

  // Find the nearest root that lies in the acceptable range
  auto root = (-half_b - sqrtd) / a;
  if (!ray_t.surrounds(root)) {
    root = (-half_b + sqrtd) / a;
    if (!ray_t.surrounds(root))
      return false;
  }

  rec.t = root;
  rec.p = r.at(rec.t);
  vec3 outward_normal = (rec.p - center) / radius;
  rec.set_face_normal(r, outward_normal);

  return true;
}
