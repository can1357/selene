#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PROC_HYPERVISOR_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class proc_hypervisor_state_t : int32_t
    {                                           
        none =        0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        present =     0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power =       0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hv_counters = 0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
