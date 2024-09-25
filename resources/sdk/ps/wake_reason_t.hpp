#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_WAKE_REASON]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wake_reason_t : int32_t          
    {                                           
        wake_reason_user =               0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_reason_execution_required = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_reason_kernel =             0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_reason_instrumentation =    0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_reason_preserve_process =   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_wake_reasons =             0x5,     // Windows 10 v1607
        wake_reason_activity_reference = 0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_reason_work_on_behalf =     0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_wake_reasons =               0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
