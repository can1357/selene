#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEMORY_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_information_class_t : int32_t     
    {                                                   
        memory_basic_information =               0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_working_set_information =         0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_mapped_filename_information =     0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_region_information =              0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_working_set_ex_information =      0x4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_shared_commit_information =       0x5,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_image_information =               0x6,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_region_information_ex =           0x7,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_privileged_basic_information =    0x8,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_enclave_image_information =       0x9,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_basic_information_capped =        0xa,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_physical_contiguity_information = 0xb,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_memory_info_class =                  0xc,     // WDK 10
        memory_bad_information =                 0xc,     // Windows 11
    };                                                  
};
