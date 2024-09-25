#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_REVOKE_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_revoke_reason_t : int32_t
    {                                      
        lost_access =             0x0,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        preempted =               0x1,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_terminated =         0x2,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        external_revoke_timeout = 0x3,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =                   0x4,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =                 0xff,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
