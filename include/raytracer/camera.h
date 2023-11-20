#pragma once

#include "raytracer/utils.h"
#include "raytracer/color.h"
#include "raytracer/hittable.h"

class camera {
 public:
  double aspect_ratio = 1.0; // Ratio of image width over height
  int    image_width  = 100; // Rendered image width in pixels

  camera() {};
  camera(double _aspect_ratio, int _image_width)
    : aspect_ratio(_aspect_ratio), image_width(_image_width) {}

  void render(const hittable &world);

 private:
  int    image_height;  // Rendered image height in pixels
  point3 center;        // Camera center
  point3 pixel00_loc;   // Location of pixel (0, 0)
  vec3   pixel_delta_u; // Offset to pixel to the right
  vec3   pixel_delta_v; // Offset to pixel below

  void initialize();
  color ray_color(const ray &r, const hittable &world) const;
};
