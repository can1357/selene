#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/capabilities_header_t.start.hpp"
namespace pci
{
    // [struct _PCI_CAPABILITIES_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct capabilities_header_t   
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint8_t capability_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CapabilityID
        _m01 uint8_t next;           //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Next
                                   
        SDK_NONVOL_PROPERTIES( "_PCI_CAPABILITIES_HEADER.$", 0x2, true, 0x6836b8eaf8ab6f1 );              
        SDK_FIXED_SIZE( capabilities_header_t, 0x2 );              
    };                             
};
#include "magic/capabilities_header_t.end.hpp"
SDK_VERIFY( struct pci::capabilities_header_t, 0x2 );
