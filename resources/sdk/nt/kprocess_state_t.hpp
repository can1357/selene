#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KPROCESS_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kprocess_state_t : int32_t
    {                                    
        in_memory =       0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        out_of_memory =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_transition =   0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        out_transition =  0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_swap =         0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        out_swap =        0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry_out_swap =  0x6,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_swap_states = 0x7,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
