#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _GETSGSTATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class getsgstatus_t : int32_t
    {                                 
        allocated =        0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer_too_small = 0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
