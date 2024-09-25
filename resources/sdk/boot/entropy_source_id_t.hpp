#pragma once
#include <sdkgen/support_library.hpp>

namespace boot
{
    // [enum _BOOT_ENTROPY_SOURCE_ID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class entropy_source_id_t : int32_t
    {                                       
        entropy_source_none =       0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_seedfile =   0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_external =   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_tpm =        0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_rdrand =     0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_time =       0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_acpi_oem0 =  0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_uefi =       0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_cng =        0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_entropy_sources =     0x8,      // Windows 10 v1607
        entropy_source_tcb_tpm =    0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        entropy_source_tcb_rdrand = 0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_entropy_sources =       0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
