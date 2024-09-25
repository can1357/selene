#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_DYNAMICBASE_BITMAP]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dynamicbase_bitmap_t : int32_t     
    {                                             
        dynamic_base_bit_map32 =           0x0,     // Windows 10 v1607
        dynamic_base_bit_map_native =      0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_base_bit_map64_low =       0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_base_bit_map64_high =      0x2,     // Windows 10 v1607
        dynamic_base_bit_map64_low_wow =   0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_base_bit_map32_wow_first = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_base_bit_map32_wow_last =  0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_base_bit_map_wow64_dll =   0x3,     // Windows 10 v1607
        dynamic_base_bit_map_invalid =     0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_base_bit_map_max =         0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_dynamic_base_bit_map =        0x4,     // Windows 10 v1607
    };                                            
};
