#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _DEP_SYSTEM_POLICY_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dep_system_policy_type_t : int32_t
    {                                            
        dep_policy_always_off =  0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dep_policy_always_on =   0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dep_policy_opt_in =      0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dep_policy_opt_out =     0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dep_total_policy_count = 0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
