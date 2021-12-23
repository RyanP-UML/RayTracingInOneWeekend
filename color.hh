#ifndef COLOR_HH
#define COLOR_HH

#include "vec3.hh"

#include <iostream>
#include <ostream>

void write_color(std::ostream &out, color pixel_color) {
    // Write translated [0,255] value of each color component
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif  // COLOR_HH