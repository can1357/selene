#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class receive_queue_operational_state_t : int32_t
    {                                                     
        undefined =   0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running =     0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused =      0x2,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_stopped = 0x3,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =     0x4,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
