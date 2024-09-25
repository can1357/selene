#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _SOC_SUBSYSTEM_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class soc_subsystem_type_t : int32_t
    {                                        
        wireless_modem =       0x0,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio_dsp =            0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wirelss_connectivity = 0x2,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sensors =              0x3,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compute_dsp =          0x4,            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secure_proc =          0x5,            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vendor_defined =       0x10000,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
