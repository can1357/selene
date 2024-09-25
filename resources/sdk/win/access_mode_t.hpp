#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _ACCESS_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class access_mode_t : int32_t
    {                                 
        not_used_access =   0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        grant_access =      0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_access =        0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deny_access =       0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        revoke_access =     0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_audit_success = 0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_audit_failure = 0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
