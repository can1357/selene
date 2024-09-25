#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switch_complex_t.start.hpp"
namespace pci
{
    struct express_bridge_t;

    // [struct _SWITCH_COMPLEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_complex_t                                              
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                               
        _m00 struct pci::express_bridge_t* upstream_port;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UpstreamPort
        _m01 struct pci::express_bridge_t* downstream_port_list;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DownstreamPortList
        _m02 uint32_t                      computed_l0s_receive_latency;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ComputedL0sReceiveLatency
        _m03 uint32_t                      computed_l0s_transmit_latency;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ComputedL0sTransmitLatency
        _m04 uint32_t                      computed_l1_latency;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ComputedL1Latency
        _m05 uint8_t                       integrated_component;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .IntegratedComponent
                                                                         
        SDK_MAGIC_PROPERTIES( "_SWITCH_COMPLEX.$", 0x20, true, 0x4050c389b0bc7211 );                              
        SDK_FIXED_SIZE( switch_complex_t, 0x20 );                              
    };                                                                   
};
#include "magic/switch_complex_t.end.hpp"
SDK_VERIFY( struct pci::switch_complex_t, 0x20 );
