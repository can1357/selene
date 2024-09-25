#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SHRINK_VOLUME_REQUEST_TYPES]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shrink_volume_request_types_t : int32_t
    {                                                 
        prepare = 0x1,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        commit =  0x2,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        abort =   0x3,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
