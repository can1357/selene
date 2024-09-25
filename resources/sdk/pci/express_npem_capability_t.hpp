#pragma once
#include <sdkgen/support_library.hpp>
#include "express_npem_status_register_t.hpp"
#include "express_npem_control_register_t.hpp"
#include "express_npem_capability_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_npem_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_NPEM_CAPABILITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_npem_capability_t                                     
    {                                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                               
        _m00 struct pci::express_enhanced_capability_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_npem_capability_register_t    capability;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Capability
        _m02 union pci::express_npem_control_register_t       control;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Control
        _m03 union pci::express_npem_status_register_t        status;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Status
                                                                         
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_NPEM_CAPABILITY.$", 0x10, true, 0xf020d29a6f81492a );           
        SDK_FIXED_SIZE( express_npem_capability_t, 0x10 );               
    };                                                                   
};
#include "magic/express_npem_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_npem_capability_t, 0x10 );
