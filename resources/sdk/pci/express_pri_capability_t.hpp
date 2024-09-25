#pragma once
#include <sdkgen/support_library.hpp>
#include "express_pri_status_register_t.hpp"
#include "express_pri_control_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_pri_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_PRI_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_pri_capability_t                                         
    {                                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                  
        _m00 struct pci::express_enhanced_capability_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_pri_control_register_t        control;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Control
        _m02 union pci::express_pri_status_register_t         status;         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Status
        _m03 uint32_t                                         pr_capacity;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PRCapacity
        _m04 uint32_t                                         pr_allocation;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PRAllocation
                                                                            
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PRI_CAPABILITY.$", 0x10, true, 0xc39ae9547ab0051c );              
        SDK_FIXED_SIZE( express_pri_capability_t, 0x10 );                   
    };                                                                      
};
#include "magic/express_pri_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_pri_capability_t, 0x10 );
