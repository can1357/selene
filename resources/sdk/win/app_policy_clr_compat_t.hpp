#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyClrCompat]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_clr_compat_t : int32_t
    {                                           
        other =            0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        classic_desktop =  0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        universal =        0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packaged_desktop = 0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
