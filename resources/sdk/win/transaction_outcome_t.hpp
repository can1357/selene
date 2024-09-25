#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TRANSACTION_OUTCOME]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class transaction_outcome_t : int32_t
    {                                         
        undetermined = 0x1,                     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed =    0x2,                     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aborted =      0x3,                     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
