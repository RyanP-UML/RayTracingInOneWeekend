#ifndef RTWEEKEND_HH
#define RTWEEKEND_HH

#include <cmath>
#include <limits>
#include <memory>
#include <cstdlib>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// constants
const double INF = std::numeric_limits<double>::infinity();
const double PI = 3.1415926535897932385;

// uitility functions
inline double degrees_to_radians(double degrees) {
    return degrees * PI / 180;
}

inline double random_double() {
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    return min + (max - min) * random_double();
}

inline double clamp(double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

// common headers
#include "ray.hh"
#include "vec3.hh"

#endif  // RTWEEKEND_HH