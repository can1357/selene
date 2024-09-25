#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_vendor_specific_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_vendor_specific_capability_t                           
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                                
        _m00 struct pci::express_enhanced_capability_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint16_t                                         vsec_id;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VsecId
        _m02 uint4_t                                          vsec_rev;     //{ +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  } | .VsecRev
        _m03 uint12_t                                         vsec_length;  //{ +0x0006@4  +0x0006@4  +0x0006@4  +0x0006@4  +0x0006@4  } | .VsecLength
                                                                          
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY.$", 0x8, true, 0xdc6dfed1565d5acb );            
        SDK_FIXED_SIZE( express_vendor_specific_capability_t, 0x8 );            
    };                                                                    
};
#include "magic/express_vendor_specific_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_vendor_specific_capability_t, 0x8 );
