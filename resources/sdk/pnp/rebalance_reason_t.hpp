#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_REBALANCE_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rebalance_reason_t : int32_t
    {                                      
        unknown =              0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        requirements_changed = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        new_device =           0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
