#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _COMPUTER_NAME_FORMAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class computer_name_format_t : int32_t
    {                                          
        net_bios =                     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dns_hostname =                 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dns_domain =                   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dns_fully_qualified =          0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_net_bios =            0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_dns_hostname =        0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_dns_domain =          0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_dns_fully_qualified = 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                          0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
