#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KWAIT_BLOCK_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kwait_block_state_t : int32_t
    {                                       
        bypass_start =            0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bypass_complete =         0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_bypass_start =    0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_bypass_complete = 0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =                  0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inactive =                0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspended =               0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_states =              0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
