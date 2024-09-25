#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTHREAD_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kthread_state_t : int32_t     
    {                                        
        initialized =                 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ready =                       0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running =                     0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        standby =                     0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminated =                  0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting =                     0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        transition =                  0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deferred_ready =              0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gate_wait_obsolete =          0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_for_process_in_swap = 0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
