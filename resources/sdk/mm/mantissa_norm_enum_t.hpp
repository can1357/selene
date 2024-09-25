#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_MANTISSA_NORM_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mantissa_norm_enum_t : int32_t
    {                                        
        1_2 =     0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        p5_2 =    0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        p5_1 =    0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        p75_1p5 = 0x3,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
