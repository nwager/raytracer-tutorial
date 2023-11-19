#pragma once

#include <vector>
#include <memory>

#include "hittable.h"

class hittable_list : public hittable {
 public:
  std::vector<std::shared_ptr<hittable>> objects;

  hittable_list();
  hittable_list(std::shared_ptr<hittable> object);

  void clear();
  void add(std::shared_ptr<hittable> object);

  bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const override;
};
