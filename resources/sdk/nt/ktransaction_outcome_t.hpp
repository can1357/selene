#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTRANSACTION_OUTCOME]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ktransaction_outcome_t : int32_t
    {                                          
        uninitialized = 0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        undetermined =  0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed =     0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aborted =       0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unavailable =   0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
