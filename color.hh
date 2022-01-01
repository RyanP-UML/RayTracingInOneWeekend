#ifndef COLOR_HH
#define COLOR_HH

#include "rtweekend.hh"

#include <cmath>
#include <iostream>
#include <ostream>

void write_color(std::ostream &out, color pixel_color, int sample_per_pixel) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Divided the color by samples and gamma corrected for gamma = 2.0;
    auto scale = 1.0 / sample_per_pixel;
    r = sqrt(scale * r);
    g = sqrt(scale * g);
    b = sqrt(scale * b);

    
    // Write translated [0,255] value of each color component
    out << static_cast<int>(256 * clamp(r, 0.0, 0.999)) << ' '
        << static_cast<int>(256 * clamp(g, 0.0, 0.999)) << ' '
        << static_cast<int>(256 * clamp(b, 0.0, 0.999)) << '\n';
}

#endif  // COLOR_HH