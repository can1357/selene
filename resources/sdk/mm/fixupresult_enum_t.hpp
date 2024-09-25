#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_FIXUPRESULT_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fixupresult_enum_t : int32_t
    {                                      
        no_change = 0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        neg_inf =   0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        neg_zero =  0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pos_zero =  0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pos_inf =   0x4,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nan =       0x5,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_float = 0x6,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        min_float = 0x7,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
