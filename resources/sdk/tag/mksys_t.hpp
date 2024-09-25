#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMKSYS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mksys_t : int32_t  
    {                             
        none =             0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        genericcomposite = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filemoniker =      0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        antimoniker =      0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        itemmoniker =      0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pointermoniker =   0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        classmoniker =     0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        objrefmoniker =    0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sessionmoniker =   0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        luamoniker =       0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
