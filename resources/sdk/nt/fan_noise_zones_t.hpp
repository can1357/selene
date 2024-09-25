#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FAN_NOISE_ZONES_]
    //  Windows 11
    //
    enum class fan_noise_zones_t : int32_t
    {                                     
        low =         0x0,                  // Windows 11
        medium =      0x1,                  // Windows 11
        medium_high = 0x2,                  // Windows 11
        high =        0x3,                  // Windows 11
        last =        0x3,                  // Windows 11
        max =         0x4,                  // Windows 11
    };                                    
};
