#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INBV_PIXEL_FORMAT]
    //  Windows 11
    //
    enum class inbv_pixel_format_t : int32_t
    {                                       
        format_unknown =     0x0,             // Windows 11
        format4_bit_planar = 0x1,             // Windows 11
        format_r8g8b8 =      0x2,             // Windows 11
        format_r8g8b8x8 =    0x3,             // Windows 11
        format_b8g8r8 =      0x4,             // Windows 11
        format_b8g8r8x8 =    0x5,             // Windows 11
    };                                      
};
