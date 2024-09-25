#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum BlockingReason]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class blocking_reason_t : uint32_t
    {                                      
        not_blocking =   0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        outgoing_call =  0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        co_wait =        0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_events = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
