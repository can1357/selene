#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagREGKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class regkind_t : int32_t
    {                             
        _default =  0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _register = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =      0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
