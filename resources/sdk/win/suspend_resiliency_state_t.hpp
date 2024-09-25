#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SUSPEND_RESILIENCY_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class suspend_resiliency_state_t : int32_t
    {                                              
        unknown =     0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspending =  0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resuming =    0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminating = 0x3,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspended =   0x4,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running =     0x5,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
