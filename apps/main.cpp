#include <iostream>
#include <algorithm>
#include <cmath>

#include "raytracer/utils.h"
#include "raytracer/color.h"
#include "raytracer/vec3.h"
#include "raytracer/ray.h"
#include "raytracer/hittable.h"
#include "raytracer/hittable_list.h"
#include "raytracer/sphere.h"
#include "raytracer/camera.h"

int main() {
  hittable_list world;

  world.add(std::make_shared<sphere>(point3(0,0,-1), 0.5));
  world.add(std::make_shared<sphere>(point3(0,-100.5,-1), 100));

  camera cam(16.0 / 9.0, 400, 100);

  cam.render(world);

  return EXIT_SUCCESS;
}
