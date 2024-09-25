#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WdfDriverStopType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class driver_stop_type_t : int32_t
    {                                      
        internal_error =            0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_error =              0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        caller_error =              0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        external_error =            0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unhandled_exception_error = 0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_stop_type_max =      0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
