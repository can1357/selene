#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CastMethod]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cast_method_t : int32_t  
    {                                   
        ok =                     0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_lt_zero =          0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_gt_max =           0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_min_max_unsigned = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_min_max_signed =   0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        to_float =               0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_float =             0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        to_bool =                0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_bool =              0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
