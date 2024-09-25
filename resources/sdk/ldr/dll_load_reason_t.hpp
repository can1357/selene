#pragma once
#include <sdkgen/support_library.hpp>

namespace ldr
{
    // [enum _LDR_DLL_LOAD_REASON]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dll_load_reason_t : int32_t     
    {                                          
        static_dependency =            0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        static_forwarder_dependency =  0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_forwarder_dependency = 0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delayload_dependency =         0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_load =                 0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        as_image_load =                0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        as_data_load =                 0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enclave_primary =              0x7,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enclave_dependency =           0x8,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        patch_image =                  0x9,      // Windows 11
        unknown =                      0xff,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
