#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ModernSTAWaitSatisfiedReason]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class modern_sta_wait_satisfied_reason_t : uint32_t
    {                                                       
        object_signaled = 0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutex_abandoned = 0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        apc_dispatched =  0x2,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timeout =         0x3,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed =          0x4,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
