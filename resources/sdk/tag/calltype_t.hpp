#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCALLTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class calltype_t : int32_t   
    {                                 
        toplevel =             0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested =               0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async =                0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        toplevel_callpending = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_callpending =    0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
