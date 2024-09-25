#pragma once
#include <sdkgen/support_library.hpp>
#include "express_acs_control_t.hpp"
#include "express_acs_capability_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_acs_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ACS_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_acs_capability_t                                          
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                   
        _m00 struct pci::express_enhanced_capability_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_acs_capability_register_t     capability;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Capability
        _m02 union pci::express_acs_control_t                 control;         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Control
        _m03 sdk::array<uint32_t, 1>                          egress_control;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EgressControl
                                                                             
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ACS_CAPABILITY.$", 0xc, true, 0x2412c1d6eb1f12c1 );               
        SDK_FIXED_SIZE( express_acs_capability_t, 0xc );                     
    };                                                                       
};
#include "magic/express_acs_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_acs_capability_t, 0xc );
