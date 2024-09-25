#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/upstream_switchport_t.start.hpp"
namespace pci
{
    struct express_bridge_t;
    struct switch_complex_t;

    // [struct _UPSTREAM_SWITCHPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct upstream_switchport_t                            
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 struct pci::express_bridge_t* root_port_bridge;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RootPortBridge
        _m01 struct pci::switch_complex_t* switch_complex;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchComplex
                                                            
        SDK_MAGIC_PROPERTIES( "_UPSTREAM_SWITCHPORT.$", 0x10, true, 0xac670c4606fa2c58 );                 
        SDK_FIXED_SIZE( upstream_switchport_t, 0x10 );                 
    };                                                      
};
#include "magic/upstream_switchport_t.end.hpp"
SDK_VERIFY( struct pci::upstream_switchport_t, 0x10 );
