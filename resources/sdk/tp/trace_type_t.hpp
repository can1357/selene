#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [enum _TP_TRACE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class trace_type_t : int32_t     
    {                                     
        tp_trace_thread_priority = 0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tp_trace_thread_affinity = 0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_tp_trace_type =        0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
