#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_DRIVER_INIT_FLAGS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class driver_init_flags_t : int32_t       
    {                                              
        driver_init_non_pnp_driver =       0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_init_no_dispatch_override = 0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verify_on =                        0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_on =                      0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_init_companion =            0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
