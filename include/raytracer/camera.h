#pragma once

#include "raytracer/utils.h"
#include "raytracer/color.h"
#include "raytracer/hittable.h"

class camera {
 public:
  double aspect_ratio      = 1.0; // Ratio of image width over height
  int    image_width       = 100; // Rendered image width in pixels
  int    samples_per_pixel = 10;  // Count of random samples for each pixel

  camera() {};
  camera(double _aspect_ratio, int _image_width, int _samples_per_pixel)
    : aspect_ratio(_aspect_ratio),
      image_width(_image_width),
      samples_per_pixel(_samples_per_pixel) {}

  void render(const hittable &world);

 private:
  int    image_height;  // Rendered image height in pixels
  point3 center;        // Camera center
  point3 pixel00_loc;   // Location of pixel (0, 0)
  vec3   pixel_delta_u; // Offset to pixel to the right
  vec3   pixel_delta_v; // Offset to pixel below

  void initialize();
  color ray_color(const ray &r, const hittable &world) const;
  ray get_ray(int i, int j) const;
  vec3 pixel_sample_square() const;
};
