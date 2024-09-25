#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PERFINFO_DYNAMIC_TICK_VETO_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_dynamic_tick_veto_reason_t : int32_t
    {                                                       
        none =                0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proc_busy =           0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        software_timer =      0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clock_constraint =    0x3,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clock_out_of_sync =   0x4,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clock_update_failed = 0x5,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =               0x6,                            // Windows 10 v1607
        no_deep_sleep =       0x6,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                 0x7,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
