#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum _FX_IO_QUEUE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_queue_state_t : int32_t
    {                                    
        accept_requests =    0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch_requests =  0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_requests =        0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_no_requests = 0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_held =           0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown =           0x10000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
