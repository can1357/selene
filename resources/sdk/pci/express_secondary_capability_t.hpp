#pragma once
#include <sdkgen/support_library.hpp>
#include "express_link_control3_t.hpp"
#include "express_lane_error_status_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_secondary_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_SECONDARY_CAPABILITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_secondary_capability_t                                       
    {                                                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                      
        _m00 struct pci::express_enhanced_capability_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct pci::express_link_control3_t              link_control3;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LinkControl3
        _m02 struct pci::express_lane_error_status_t          lane_error_status;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LaneErrorStatus
                                                                                
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SECONDARY_CAPABILITY.$", 0xc, true, 0xbb8acb95d7412149 );                  
        SDK_FIXED_SIZE( express_secondary_capability_t, 0xc );                  
    };                                                                          
};
#include "magic/express_secondary_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_secondary_capability_t, 0xc );
