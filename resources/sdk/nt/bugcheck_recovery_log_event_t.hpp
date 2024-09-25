#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _BUGCHECK_RECOVERY_LOG_EVENT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bugcheck_recovery_log_event_t : int32_t
    {                                                 
        start =                    0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        phase1_status =            0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        phase2_status =            0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                      0x3,                 // Windows 10 v2004, Windows 10 v20H2
        multiple_bugcheck_status = 0x3,                 // Windows 11
        //max =                    0x4,                 // Windows 11
    };                                                
};
