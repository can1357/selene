#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_EXECUTION_SPEED]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_execution_speed_t : int32_t
    {                                        
        low =              0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =         0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal =           0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        foreground_boost = 0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =            0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =          0xff,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
