#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDESCKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class desckind_t : int32_t
    {                              
        none =           0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        funcdesc =       0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vardesc =        0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        typecomp =       0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicitappobj = 0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
