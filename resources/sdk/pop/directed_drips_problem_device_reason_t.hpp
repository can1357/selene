#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_DIRECTED_DRIPS_PROBLEM_DEVICE_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class directed_drips_problem_device_reason_t : int32_t
    {                                                          
        special_device =      0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_dfx =              0x1,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_ps4 =              0x2,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_ps4_root =         0x3,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        component_contraint = 0x4,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dfx_failure =         0x5,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paging_device =       0x6,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        debugging_device =    0x7,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dfx_not_allowed =     0x8,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dfx_opt_out =         0x9,                               // Windows 11
        max =                 0x9,                               // Windows 10 v2004, Windows 10 v20H2
        //max =               0xa,                               // Windows 11
    };                                                         
};
