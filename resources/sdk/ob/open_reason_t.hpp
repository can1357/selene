#pragma once
#include <sdkgen/support_library.hpp>

namespace ob
{
    // [enum _OB_OPEN_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class open_reason_t : int32_t
    {                                 
        create_handle =    0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        open_handle =      0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        duplicate_handle = 0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inherit_handle =   0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_open_reason =  0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
