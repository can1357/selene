#pragma once
#include <sdkgen/support_library.hpp>
#include "express_ltr_max_latency_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_ltr_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_LTR_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_ltr_capability_t                                   
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                            
        _m00 struct pci::express_enhanced_capability_header_t header;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_ltr_max_latency_register_t    latency;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Latency
                                                                      
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LTR_CAPABILITY.$", 0x8, true, 0x6466fb64e85aa5c7 );        
        SDK_FIXED_SIZE( express_ltr_capability_t, 0x8 );              
    };                                                                
};
#include "magic/express_ltr_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_ltr_capability_t, 0x8 );
