#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_enhanced_capability_header_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_enhanced_capability_header_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t capability_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CapabilityID
        _m01 uint4_t  version;                   //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Version
        _m02 uint12_t next;                      //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .Next
                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER.$", 0x4, true, 0x2c9b97698d9d1882 );              
        SDK_FIXED_SIZE( express_enhanced_capability_header_t, 0x4 );              
    };                                         
};
#include "magic/express_enhanced_capability_header_t.end.hpp"
SDK_VERIFY( struct pci::express_enhanced_capability_header_t, 0x4 );
