#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _DEVICE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_state_t : int32_t
    {                                  
        not_present =      0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        working =          0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =          0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending_stop =     0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending_remove =   0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal = 0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleted =          0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =         0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_resource =      0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
