#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum EffectiveUnmarshalingPolicy]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class effective_unmarshaling_policy_t : uint32_t
    {                                                    
        none =          0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        classic =       0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        strong =        0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_only = 0x3,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
