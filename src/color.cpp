#include "raytracer/color.h"

void write_color(std::ostream &out, color pixel_color, int samples_per_pixel) {
  // Divide the color by the number of samples
  auto scale = 1.0 / samples_per_pixel;
  pixel_color *= scale;

  auto r = pixel_color.x();
  auto g = pixel_color.y();
  auto b = pixel_color.z();

  // Write the translated [0,255] value of each color component
  out << static_cast<int>(255.999 * pixel_color.x()) << ' '
      << static_cast<int>(255.999 * pixel_color.y()) << ' '
      << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}