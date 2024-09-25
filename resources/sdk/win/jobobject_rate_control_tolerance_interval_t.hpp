#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class jobobject_rate_control_tolerance_interval_t : int32_t
    {                                                               
        _short = 0x1,                                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium = 0x2,                                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _long =  0x3,                                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                              
};
