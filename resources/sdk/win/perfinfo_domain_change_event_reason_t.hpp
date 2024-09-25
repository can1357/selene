#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PERFINFO_DOMAIN_CHANGE_EVENT_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_domain_change_event_reason_t : int32_t
    {                                                         
        idle_halt =     0x0,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_resume =   0x1,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_restore =  0x2,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_callout =  0x3,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enter_syscall = 0x4,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enter_trap =    0x5,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =       0x6,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
