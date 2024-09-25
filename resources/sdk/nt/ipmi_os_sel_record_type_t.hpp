#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _IPMI_OS_SEL_RECORD_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ipmi_os_sel_record_type_t : int32_t
    {                                             
        whea =               0x0,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =              0x1,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        whea_error_xpf_mca = 0x2,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        whea_error_pci =     0x3,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        whea_error_nmi =     0x4,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        whea_error_other =   0x5,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        raw =                0x6,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver =             0x7,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bugcheck_recovery =  0x8,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bugcheck_data =      0x9,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0xa,                   // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
