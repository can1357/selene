#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_DELAY_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class delay_type_t : int32_t             
    {                                             
        reset_time =                       0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dl_up_time =                       0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flr_reset_time =                   0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d3hot_to_d0_time =                 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vf_enable_time =                   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_transaction_time =         0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary_bus_reset_time =         0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //delay_max =                      0x7,     // Windows 10 v1607
        extra_delay_between_pmcsr_writes = 0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        delay_max =                        0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
