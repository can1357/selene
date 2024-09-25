#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCOINITEE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class coinitee_t : int32_t
    {                              
        _default = 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll =      0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        main =     0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
