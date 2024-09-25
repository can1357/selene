#pragma once
#include <sdkgen/support_library.hpp>

namespace cm
{
    // [enum _CM_ERROR_CONTROL_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_control_type_t : int32_t
    {                                        
        ignore_error =   0x0,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal_error =   0x1,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        severe_error =   0x2,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        critical_error = 0x3,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
