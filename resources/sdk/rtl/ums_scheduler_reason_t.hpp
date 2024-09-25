#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_UMS_SCHEDULER_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ums_scheduler_reason_t : int32_t
    {                                          
        startup =        0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_blocked = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_yield =   0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
