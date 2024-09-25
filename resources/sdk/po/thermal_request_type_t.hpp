#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_THERMAL_REQUEST_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class thermal_request_type_t : int32_t
    {                                          
        passive = 0x0,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =  0x1,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
