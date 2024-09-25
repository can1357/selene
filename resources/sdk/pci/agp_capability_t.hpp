#pragma once
#include <sdkgen/support_library.hpp>
#include "agp_status_t.hpp"
#include "agp_command_t.hpp"
#include "capabilities_header_t.hpp"

#include "magic/agp_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_capability_t                                
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct pci::capabilities_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint4_t                           minor;        //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Minor
        _m02 uint4_t                           major;        //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .Major
        _m03 uint8_t                           rsvd1;        //{ +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  } | .Rsvd1
                                                           
        // WDK 10                                          
        //                                                 
        _m04 struct pci::agp_status_t          agp_status;   //{ +0x0004    } | .AGPStatus
        _m05 struct pci::agp_command_t         agp_command;  //{ +0x0008    } | .AGPCommand
                                                           
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_CAPABILITY.$", 0xc, true, 0x3063159a1a12b3f8 );            
        SDK_FIXED_SIZE( agp_capability_t, 0xc );            
    };                                                     
};
#include "magic/agp_capability_t.end.hpp"
SDK_VERIFY( struct pci::agp_capability_t, 0xc );
