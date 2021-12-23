#ifndef RAY_HH
#define RAY_HH

#include "vec3.hh"

class ray {
    public:
        ray() {}
        ray(const point3 &origin, const vec3 &direction) 
            : dir(direction), orig(origin) {}
        point3 origin() const { return orig; }
        vec3 direction() const { return dir; }
        point3 at(double t) const {
            return orig + t * dir;
        }
    public:
        point3 orig;
        vec3 dir;
};

#endif  // RAY_HH