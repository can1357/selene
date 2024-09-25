#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_FILTER_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class filter_state_t : uint8_t
    {                                  
        detached =   0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attaching =  0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused =     0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running =    0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pausing =    0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        detaching =  0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
