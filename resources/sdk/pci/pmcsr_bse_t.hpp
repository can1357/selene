#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmcsr_bse_t.start.hpp"
namespace pci
{
    // [struct _PCI_PMCSR_BSE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pmcsr_bse_t                               
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 uint6_t rsvd1;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd1
        _m01 uint1_t d3_hot_supports_stop_clock;       //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .D3HotSupportsStopClock
        _m02 uint1_t bus_power_clock_control_enabled;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .BusPowerClockControlEnabled
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_PMCSR_BSE.$", 0x1, true, 0x20074cae7535f966 );                                
        SDK_FIXED_SIZE( pmcsr_bse_t, 0x1 );                                
    };                                               
};
#include "magic/pmcsr_bse_t.end.hpp"
SDK_VERIFY( struct pci::pmcsr_bse_t, 0x1 );
