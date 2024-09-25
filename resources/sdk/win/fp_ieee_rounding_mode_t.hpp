#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FP__IEEE_ROUNDING_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fp_ieee_rounding_mode_t : int32_t
    {                                           
        nearest =        0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        minus_infinity = 0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        plus_infinity =  0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chopped =        0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
