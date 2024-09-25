#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComparisonMethod]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class comparison_method_t : int32_t
    {                                       
        ok =         0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int =   0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64 = 0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsigned_t = 0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsigned_u = 0x4,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
