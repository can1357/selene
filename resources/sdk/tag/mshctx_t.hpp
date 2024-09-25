#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMSHCTX]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mshctx_t : int32_t 
    {                             
        local =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nosharedmem =      0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        differentmachine = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc =           0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        crossctx =         0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        container =        0x5,     // Windows 11
        reserved1 =        0x5,     // Windows 10 v2004, Windows 10 v20H2
    };                            
};
