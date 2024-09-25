#pragma once
#include <sdkgen/support_library.hpp>

namespace ci
{
    // [enum _CI_WINDOWS_LOCKDOWN_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class windows_lockdown_mode_t : int32_t
    {                                           
        unlocked = 0x0,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trial =    0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        locked =   0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x3,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
