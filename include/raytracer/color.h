#pragma once

#include <iostream>

#include "raytracer/vec3.h"

using color = vec3;

void write_color(std::ostream &out, color pixel_color);
