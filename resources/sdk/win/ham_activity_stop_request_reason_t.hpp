#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_ACTIVITY_STOP_REQUEST_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_activity_stop_request_reason_t : int32_t
    {                                                      
        invalid =                0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resources =              0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_resumed =           0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_suspended =         0x3,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_state =           0x4,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        termination =            0x5,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timeout =                0x6,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        debug_suspend =          0x7,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        background_access_lost = 0x8,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpl_policy =             0x9,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_active =             0xa,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        donor_exit =             0xb,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        licensing =              0xc,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =                  0xd,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
