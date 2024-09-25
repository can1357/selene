#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_ERROR_SOURCE_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_source_state_t : int32_t
    {                                        
        stopped =        0x1,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =        0x2,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =        0x3,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_pending = 0x4,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
