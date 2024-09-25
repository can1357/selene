#pragma once
#include <sdkgen/support_library.hpp>
#include "express_ptm_control_register_t.hpp"
#include "express_ptm_capability_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_ptm_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_PTM_CAPABILITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_ptm_capability_t                                          
    {                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                   
        _m00 struct pci::express_enhanced_capability_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_ptm_capability_register_t     ptm_capability;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PtmCapability
        _m02 union pci::express_ptm_control_register_t        ptm_control;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PtmControl
                                                                             
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PTM_CAPABILITY.$", 0xc, true, 0xc413c39933dbcd8b );               
        SDK_FIXED_SIZE( express_ptm_capability_t, 0xc );                     
    };                                                                       
};
#include "magic/express_ptm_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_ptm_capability_t, 0xc );
