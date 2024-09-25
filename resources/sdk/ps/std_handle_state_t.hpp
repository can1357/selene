#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_STD_HANDLE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class std_handle_state_t : int32_t
    {                                      
        never_duplicate =       0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_duplicate =     0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        always_duplicate =      0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_std_handle_states = 0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
