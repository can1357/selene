#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_ACTIVITY_EE_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_activity_ee_policy_t : int32_t
    {                                            
        none =  0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        block = 0x1,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow = 0x2,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count = 0x3,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
