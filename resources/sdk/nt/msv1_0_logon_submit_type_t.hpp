#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MSV1_0_LOGON_SUBMIT_TYPE]
    //  WDK 10
    //
    enum class msv1_0_logon_submit_type_t : int32_t
    {                                              
        v1_0_interactive_logon =        0x2,         // WDK 10
        v1_0_lm20_logon =               0x3,         // WDK 10
        v1_0_network_logon =            0x4,         // WDK 10
        v1_0_sub_auth_logon =           0x5,         // WDK 10
        v1_0_workstation_unlock_logon = 0x7,         // WDK 10
        v1_0s4u_logon =                 0xc,         // WDK 10
        v1_0_virtual_logon =            0x52,        // WDK 10
        v1_0_no_elevation_logon =       0x53,        // WDK 10
        v1_0_luid_logon =               0x54,        // WDK 10
    };                                             
};
