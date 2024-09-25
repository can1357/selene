#pragma once
#include <sdkgen/support_library.hpp>
#include "../pm/support_t.hpp"

#include "magic/pmc_t.start.hpp"
namespace pci
{
    // [struct _PCI_PMC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pmc_t                                                 
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                       
        _m00 uint3_t              version;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Version
        _m01 uint1_t              pme_clock;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PMEClock
        _m02 uint1_t              rsvd1;                           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Rsvd1
        _m03 uint1_t              device_specific_initialization;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .DeviceSpecificInitialization
        _m04 uint2_t              rsvd2;                           //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Rsvd2
                                                                 
        // WDK 10                                                
        //                                                       
        _m05 struct pm::support_t support;                         //{ +0x0001    } | .Support
                                                                 
        SDK_NONVOL_PROPERTIES( "_PCI_PMC.$", 0x2, true, 0x618eeeae45e21353 );                               
        SDK_FIXED_SIZE( pmc_t, 0x2 );                               
    };                                                           
};
#include "magic/pmc_t.end.hpp"
SDK_VERIFY( struct pci::pmc_t, 0x2 );
