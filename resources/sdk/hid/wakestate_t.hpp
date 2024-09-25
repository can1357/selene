#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum WAKESTATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wakestate_t : int32_t
    {                               
        disarmed =          0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting =           0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_cancelled = 0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        armed =             0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        arming_cancelled =  0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completing =        0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
