#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum KTM_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ktm_state_t : int32_t
    {                               
        uninitialized =   0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialized =     0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recovering =      0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        online =          0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recovery_failed = 0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offline =         0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
