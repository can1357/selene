#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"
#include "express_tph_requester_control_register_t.hpp"
#include "express_tph_requester_capability_register_t.hpp"

#include "magic/express_tph_requester_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_tph_requester_capability_t                                      
    {                                                                              
        using requester_capability_t = union pci::express_tph_requester_capability_register_t;                     
        using requester_control_t =    union pci::express_tph_requester_control_register_t;                     
                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                         
        _m00 struct pci::express_enhanced_capability_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 requester_capability_t                           requester_capability;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RequesterCapability
        _m02 requester_control_t                              requester_control;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RequesterControl
                                                                                   
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY.$", 0xc, true, 0x477ffacfe7e4ae5c );                     
        SDK_FIXED_SIZE( express_tph_requester_capability_t, 0xc );                     
    };                                                                             
};
#include "magic/express_tph_requester_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_tph_requester_capability_t, 0xc );
