#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _APTTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class apttype_t : int32_t
    {                             
        sta =     0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mta =     0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        na =      0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mainsta = 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        current = 0xff,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
