#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KWAIT_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kwait_state_t : int32_t    
    {                                     
        wait_in_progress =         0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_committed =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_aborted =             0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_first_suspend_state = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_suspend_in_progress = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_suspended =           0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_resume_in_progress =  0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_last_suspend_state =  0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_resume_aborted =      0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_wait_state =       0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
