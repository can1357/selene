#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _KBUGCHECK_BUFFER_DUMP_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kbugcheck_buffer_dump_state_t : int32_t
    {                                                 
        empty =      0x0,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inserted =   0x1,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =    0x2,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finished =   0x3,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incomplete = 0x4,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
