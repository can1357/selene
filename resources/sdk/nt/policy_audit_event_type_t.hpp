#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _POLICY_AUDIT_EVENT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class policy_audit_event_type_t : int32_t
    {                                             
        system =                   0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logon =                    0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_access =            0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        privilege_use =            0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        detailed_tracking =        0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        policy_change =            0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        account_management =       0x6,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        directory_service_access = 0x7,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        account_logon =            0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
