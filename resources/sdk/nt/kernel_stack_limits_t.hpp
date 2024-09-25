#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KERNEL_STACK_LIMITS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kernel_stack_limits_t : int32_t
    {                                         
        bugcheck_stack_limits =      0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpc_stack_limits =           0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        expanded_stack_limits =      0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal_stack_limits =        0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32k_stack_limits =        0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        swap_busy_stack_limits =     0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        isr_stack_limits =           0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        debugger_stack_limits =      0x7,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum_stack_limits =     0x7,       // Windows 10 v1607
        nmi_stack_limits =           0x8,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine_check_stack_limits = 0x9,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exception_stack_limits =     0xa,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_stack_limits =       0xb,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
