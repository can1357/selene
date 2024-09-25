#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_PROTECTED_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class protected_type_t : int32_t
    {                                    
        none =            0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protected_light = 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _protected =      0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =             0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
