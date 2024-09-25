#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DOMAIN_INFORMATION_CLASS]
    //  WDK 10
    //
    enum class domain_information_class_t : int32_t
    {                                              
        password_information =    0x1,               // WDK 10
        general_information =     0x2,               // WDK 10
        logoff_information =      0x3,               // WDK 10
        oem_information =         0x4,               // WDK 10
        name_information =        0x5,               // WDK 10
        replication_information = 0x6,               // WDK 10
        server_role_information = 0x7,               // WDK 10
        modified_information =    0x8,               // WDK 10
        state_information =       0x9,               // WDK 10
        uas_information =         0xa,               // WDK 10
        general_information2 =    0xb,               // WDK 10
        lockout_information =     0xc,               // WDK 10
        modified_information2 =   0xd,               // WDK 10
    };                                             
};
