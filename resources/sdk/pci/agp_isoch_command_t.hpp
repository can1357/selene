#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_isoch_command_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_ISOCH_COMMAND]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_isoch_command_t
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 uint6_t rsvd1;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd1
        _m01 uint2_t isoch_y;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Isoch_Y
        _m02 uint8_t isoch_n;   //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Isoch_N
                              
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_ISOCH_COMMAND.$", 0x2, true, 0xe1bc0bb60dc7e61a );        
        SDK_FIXED_SIZE( agp_isoch_command_t, 0x2 );        
    };                        
};
#include "magic/agp_isoch_command_t.end.hpp"
SDK_VERIFY( struct pci::agp_isoch_command_t, 0x2 );
