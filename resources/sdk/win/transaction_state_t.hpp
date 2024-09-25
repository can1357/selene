#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TRANSACTION_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class transaction_state_t : int32_t
    {                                       
        normal =           0x1,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indoubt =          0x2,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed_notify = 0x3,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
