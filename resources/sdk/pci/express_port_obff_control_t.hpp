#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _EXPRESS_PORT_OBFF_CONTROL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_port_obff_control_t : int32_t
    {                                               
        disabled =                           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_using_messages_variation_a = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_using_messages_variation_b = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_using_wake =                 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
