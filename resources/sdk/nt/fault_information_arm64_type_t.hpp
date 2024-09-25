#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FAULT_INFORMATION_ARM64_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fault_information_arm64_type_t : int32_t
    {                                                  
        unsupported_upstream_transaction = 0x0,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        address_size_fault =               0x1,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlb_match_conflict =               0x2,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        external_fault =                   0x3,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permission_fault =                 0x4,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        access_flag_fault =                0x5,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translation_fault =                0x6,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_fault_type =                   0x7,          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
