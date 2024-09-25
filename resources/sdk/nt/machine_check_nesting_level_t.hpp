#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MACHINE_CHECK_NESTING_LEVEL]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class machine_check_nesting_level_t : int32_t
    {                                                 
        normal =         0x0,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nmi =            0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nesting_levels = 0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
