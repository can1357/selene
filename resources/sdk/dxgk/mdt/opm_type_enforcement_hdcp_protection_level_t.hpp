#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_TYPE_ENFORCEMENT_HDCP_PROTECTION_LEVEL]
    //  WDK 10
    //
    enum class opm_type_enforcement_hdcp_protection_level_t : int32_t
    {                                                                
        off =                         0x0,                             // WDK 10
        on_with_no_type_restriction = 0x1,                             // WDK 10
        on_with_type1_restriction =   0x2,                             // WDK 10
        force_ulong =                 0x7fffffff,                      // WDK 10
    };                                                               
};
