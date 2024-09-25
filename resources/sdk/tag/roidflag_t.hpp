#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagROIDFLAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class roidflag_t : int32_t
    {                              
        _register =  0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ping =       0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deregister = 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleteme =   0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
