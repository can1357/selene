#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CALLFRAME_WALK]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callframe_walk_t : int32_t
    {                                    
        in =    0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inout = 0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        out =   0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
