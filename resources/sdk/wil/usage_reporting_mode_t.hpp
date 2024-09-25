#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_UsageReportingMode]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usage_reporting_mode_t : int32_t
    {                                          
        _default =           0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        suppress_potential = 0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        suppress_implicit =  0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
