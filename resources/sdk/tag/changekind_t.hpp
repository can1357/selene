#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCHANGEKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class changekind_t : int32_t
    {                                
        addmember =        0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deletemember =     0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setnames =         0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setdocumentation = 0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        general =          0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalidate =       0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        changefailed =     0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =              0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
