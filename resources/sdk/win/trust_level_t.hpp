#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum TrustLevel]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class trust_level_t : int32_t
    {                                 
        base_trust =    0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        partial_trust = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_trust =    0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
