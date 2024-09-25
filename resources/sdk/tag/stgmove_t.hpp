#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSTGMOVE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stgmove_t : int32_t
    {                             
        move =        0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        copy =        0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shallowcopy = 0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
