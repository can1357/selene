#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PERFINFO_DEBUG_EVENT_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_debug_event_reason_t : int32_t
    {                                                 
        received =  0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        continued = 0x2,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x3,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
