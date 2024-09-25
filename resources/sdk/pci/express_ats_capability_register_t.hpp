#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_ats_capability_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_ats_capability_register_t     
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                       
        _m00 uint5_t invalidate_queue_depth;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .InvalidateQueueDepth
        _m01 uint1_t page_aligned_request;         //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PageAlignedRequest
        _m02 uint1_t global_invalidate_supported;  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .GlobalInvalidateSupported
                                                 
        // Windows 11                            
        //                                       
        _m03 uint1_t relaxed_ordering_supported;   //{ +0x0000@7  } | .RelaxedOrderingSupported
                                                 
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ATS_CAPABILITY_REGISTER.$", 0x2, true, 0xbc958ad838e317c8 );                            
        SDK_FIXED_SIZE( express_ats_capability_register_t, 0x2 );                            
    };                                           
};
#include "magic/express_ats_capability_register_t.end.hpp"
SDK_VERIFY( struct pci::express_ats_capability_register_t, 0x2 );
