#pragma once
#include <sdkgen/support_library.hpp>

namespace lsa
{
    // [enum LSA_FOREST_TRUST_RECORD_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class forest_trust_record_type_t : int32_t
    {                                              
        top_level_name =     0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        top_level_name_ex =  0x1,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        domain_info =        0x2,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        record_type_last =   0x2,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        binary_info =        0x3,                    // Windows 11
        //record_type_last = 0x4,                    // Windows 11
        scanner_info =       0x4,                    // Windows 11
    };                                             
};
