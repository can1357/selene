#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PDC_CS_PHASE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pdc_cs_phase_t : int32_t        
    {                                          
        no_cs_phase =                   0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        connection_phase =              0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shell_phase =                   0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        plm_phase =                     0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maintenance_phase =             0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dam_phase =                     0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_power_phase =               0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resiliency_notification_phase = 0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resiliency_phase =              0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_phase =                 0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_phase =                     0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
