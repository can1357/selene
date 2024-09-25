#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KBUGCHECK_CALLBACK_REASON]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kbugcheck_callback_reason_t : int32_t
    {                                               
        invalid =                        0x0,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =                      0x1,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary_dump_data =            0x2,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dump_io =                        0x3,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_pages =                      0x4,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary_multi_part_dump_data = 0x5,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_pages =                   0x6,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triage_dump_data =               0x7,         // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =                      0x8,         // Windows 11
    };                                              
};
