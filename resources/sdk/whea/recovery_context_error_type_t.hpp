#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class recovery_context_error_type_t : int32_t
    {                                                 
        memory = 0x1,                                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pmem =   0x2,                                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =    0x3,                                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
