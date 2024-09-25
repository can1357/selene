#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMEMCTX]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memctx_t : int32_t
    {                            
        task =      0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared =    0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        macsystem = 0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        same =      0xfe,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =   0xff,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                           
};
