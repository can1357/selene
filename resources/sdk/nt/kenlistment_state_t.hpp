#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KENLISTMENT_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kenlistment_state_t : int32_t
    {                                       
        uninitialized =          0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =                 0x100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preparing =              0x101,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prepared =               0x102,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_doubt =               0x103,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed =              0x104,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed_notify =       0x105,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        commit_requested =       0x106,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aborted =                0x107,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delegated =              0x108,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delegated_disconnected = 0x109,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_preparing =          0x10a,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forgotten =              0x10b,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recovering =             0x10c,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aborting =               0x10d,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_only =              0x10e,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        outcome_unavailable =    0x10f,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offline =                0x110,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_prepared =           0x111,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialized =            0x112,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
