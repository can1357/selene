#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CALLFRAME_FREE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callframe_free_t : int32_t
    {                                    
        none =      0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in =        0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inout =     0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        out =       0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        top_inout = 0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        top_out =   0x10,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =       0x1f,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
