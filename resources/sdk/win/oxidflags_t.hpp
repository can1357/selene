#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum OXIDFLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oxidflags_t : int32_t
    {                               
        machine_local =   0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rpcss =           0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_container = 0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =             0x7,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
