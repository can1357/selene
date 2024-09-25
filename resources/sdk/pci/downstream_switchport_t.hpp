#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kinterrupt_t; }

#include "magic/downstream_switchport_t.start.hpp"
namespace pci
{
    struct express_bridge_t;
    struct switch_complex_t;

    // [struct _DOWNSTREAM_SWITCHPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct downstream_switchport_t                                       
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                               
        _m00 struct pci::express_bridge_t* root_port_bridge;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RootPortBridge
        _m01 struct pci::switch_complex_t* switch_complex;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchComplex
        _m02 struct nt::kinterrupt_t*      interrupt_object;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterruptObject
        _m03 uint8_t                       upstream_link_l0s_l1_override;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .UpstreamLinkL0sL1Override
                                                                         
        SDK_MAGIC_PROPERTIES( "_DOWNSTREAM_SWITCHPORT.$", 0x20, true, 0x1fc7b2c38f7e1b07 );                              
        SDK_FIXED_SIZE( downstream_switchport_t, 0x20 );                              
    };                                                                   
};
#include "magic/downstream_switchport_t.end.hpp"
SDK_VERIFY( struct pci::downstream_switchport_t, 0x20 );
