#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _POINTER_ACTIVATION_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pointer_activation_policy_t : int32_t
    {                                               
        activate =    0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_activate = 0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
