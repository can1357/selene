#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTRANSACTION_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ktransaction_state_t : int32_t
    {                                        
        uninitialized = 0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =        0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preparing =     0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prepared =      0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_doubt =      0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed =     0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aborted =       0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delegated =     0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_preparing = 0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forgotten =     0x9,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recovering =    0xa,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_prepared =  0xb,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
