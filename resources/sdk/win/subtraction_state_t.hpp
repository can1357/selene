#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SubtractionState]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class subtraction_state_t : int32_t
    {                                       
        both_unsigned =             0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int_check_min_max =    0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int_check_min =        0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_min_max =  0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_min =      0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64_int =                0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint_int64 =                0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_int =                 0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_int64 =                 0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_uint =                0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_uint64 =                0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_uint64 =              0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        both_unsigned2 =            0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int_check_min_max2 =   0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_min_max2 = 0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64_int2 =               0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint_int642 =               0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_int2 =                0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_int642 =                0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_uint2 =               0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_uint642 =               0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_uint642 =             0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =                     0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
