#include <iostream>

#include "raytracer/color.h"
#include "raytracer/vec3.h"

int main() {
  const int IMAGE_WIDTH = 256;
  const int IMAGE_HEIGHT = 256;

  std::cout << "P3\n" << IMAGE_WIDTH << ' ' << IMAGE_HEIGHT << "\n255\n";

  for (int j = 0; j < IMAGE_HEIGHT; ++j) {
    std::clog << "\rScanlines remaining: " << (IMAGE_HEIGHT - j) << ' ' << std::flush;
    for (int i = 0; i < IMAGE_WIDTH; ++i) {
      auto pixel_color = color(
        double(i)/(IMAGE_WIDTH-1),
        double(j)/(IMAGE_HEIGHT-1),
        0
      );

      write_color(std::cout, pixel_color);
    }
  }

  std::clog << "\rDone.                 \n";

  return EXIT_SUCCESS;
}
