#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AdditionState]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class addition_state_t : int32_t          
    {                                              
        cast_int_check_max =                0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint_check_overflow =          0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint_check_overflow_max =      0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint64_check_overflow =        0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint64_check_overflow_max =    0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int_check_min_max =            0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_min_max =          0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_max =              0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint64_check_min_max =         0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint64_check_min_max2 =        0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_overflow =         0xa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_overflow_min_max = 0xb,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64_check_overflow_max =     0xc,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        manual_check_int64_uint64 =         0xd,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        manual_check =                      0xe,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =                             0xf,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
