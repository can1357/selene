#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_CONFIGURATION_SOURCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class configuration_source_t : int32_t
    {                                          
        user_provisioned =           0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        admin_provisioned =          0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_provisioned =       0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_provisioned =         0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modem_provisioned =          0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_provision_source =     0x5,        // Windows 10 v1607
        modem_operator_provisioned = 0x5,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_provision_source =       0x6,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
