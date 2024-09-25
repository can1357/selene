#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PERFINFO_DYNAMIC_TICK_DISABLE_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_dynamic_tick_disable_reason_t : int32_t
    {                                                          
        none =          0x0,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bcd_override =  0x1,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_hw_support = 0x2,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        em_override =   0x3,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x4,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
