#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MINIPORT_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class miniport_state_t : int32_t
    {                                    
        undefined_state = 0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        halted =          0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initializing =    0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting =      0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running =         0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pausing =         0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused =          0x6,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
