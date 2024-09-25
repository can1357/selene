#pragma once
#include <sdkgen/support_library.hpp>

namespace ke
{
    // [enum _KE_WAKE_SOURCE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wake_source_type_t : int32_t
    {                                      
        spurious_wake =       0x0,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        spurious_clock =      0x1,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        spurious_interrupt =  0x2,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_failure =       0x3,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        accounting_failure =  0x4,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        static_source_max =   0x4,           // Windows 10 v2004, Windows 10 v20H2
        interrupt =           0x5,           // Windows 10 v2004, Windows 10 v20H2
        non_ir_timer =        0x5,           // Windows 11
        debug_poll =          0x6,           // Windows 11
        ir_timer =            0x6,           // Windows 10 v2004, Windows 10 v20H2
        clock_watchdog =      0x7,           // Windows 11
        max =                 0x7,           // Windows 10 v2004, Windows 10 v20H2
        clock_internal =      0x8,           // Windows 11
        clock_not_owner =     0x9,           // Windows 11
        clock_not_armed =     0xa,           // Windows 11
        ex_timer =            0xb,           // Windows 11
        //static_source_max = 0xb,           // Windows 11
        //interrupt =         0x80,          // Windows 11
        //ir_timer =          0x81,          // Windows 11
        //max =               0x82,          // Windows 11
    };                                     
};
