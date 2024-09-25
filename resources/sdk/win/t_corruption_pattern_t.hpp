#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum tCorruptionPattern]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class t_corruption_pattern_t : int32_t
    {                                          
        zero_out =     0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        negate =       0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_flip =     0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inc_dec =      0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        randomize =    0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_patterns = 0x64,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
