#include <iostream>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <bit>
#include <format>

int main()
{
    auto outputStr = std::format("       a : single     ceil    floor  width l_zero  l_one r_zero  r_one popcnt");
    puts( outputStr.c_str() );

    for (uint32_t a = 0; a < 32; a++)
    {
        auto outputStr = std::format(
            "{0:>08b} : {1:>6s} {2:>08b} {3:>08b} {4:>6d} {5:>6d} {6:>6d} {7:>6d} {8:>6d} {9:>6d}",
            a,
            std::has_single_bit(a) ? "true" : "false",
            std::bit_ceil(a),
            std::bit_floor(a),
            std::bit_width(a),
            std::countl_zero(a),
            std::countl_one(a),
            std::countr_zero(a),
            std::countr_one(a),
            std::popcount(a)
            );
        puts( outputStr.c_str() );
    }
    

    return 0;
}

