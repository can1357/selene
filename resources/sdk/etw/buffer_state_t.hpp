#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_BUFFER_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class buffer_state_t : int32_t
    {                                  
        free =                0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        general_logging =     0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_switch =            0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush =               0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending_compression = 0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compressed =          0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        placeholder =         0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =             0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
