#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RUNLEVEL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class runlevel_t : int32_t
    {                              
        lua =         0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        highest =     0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        admin =       0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_non_uia = 0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lua_uia =     0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        highest_uia = 0x11,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        admin_uia =   0x12,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x13,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
