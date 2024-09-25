#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_FEATURE_ENABLED_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_enabled_state_t : int32_t
    {                                           
        _default = 0x0,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled = 0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =  0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
