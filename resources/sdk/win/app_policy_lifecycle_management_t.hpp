#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyLifecycleManagement]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_lifecycle_management_t : int32_t
    {                                                     
        unmanaged = 0x0,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        managed =   0x1,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
