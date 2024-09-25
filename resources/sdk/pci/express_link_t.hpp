#pragma once
#include <sdkgen/support_library.hpp>
#include "express_link_status_register_t.hpp"
#include "express_link_control_register_t.hpp"
#include "express_link_capabilities_register_t.hpp"

#include "magic/express_link_t.start.hpp"
namespace pci
{
    struct express_link_t;

    // [struct _EXPRESS_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct express_link_t                                                          
    {                                                                              
        using link_control_t = sdk::variant<union pci::express_link_control_register_t, volatile union pci::express_link_control_register_t>;                      
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                         
        _m00 struct pci::express_link_t*                     target_link;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetLink
        _m01 link_control_t                                  link_control;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LinkControl
        _m02 union pci::express_link_capabilities_register_t link_capabilities;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LinkCapabilities
        _m03 union pci::express_link_status_register_t       link_status;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LinkStatus
        _m04 uint8_t                                         l0s_supported;          //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .L0sSupported
        _m05 uint8_t                                         l1_supported;           //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .L1Supported
        _m06 uint8_t                                         l0s_enabled;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .L0sEnabled
        _m07 uint8_t                                         l1_enabled;             //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .L1Enabled
        _m08 uint32_t                                        l0s_exit_latency_low;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .L0sExitLatencyLow
        _m09 uint32_t                                        l0s_exit_latency_high;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .L0sExitLatencyHigh
        _m10 uint32_t                                        l1_exit_latency_low;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .L1ExitLatencyLow
        _m11 uint32_t                                        l1_exit_latency_high;   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .L1ExitLatencyHigh
                                                                                   
        SDK_MAGIC_PROPERTIES( "_EXPRESS_LINK.$", 0x28, true, 0x1a86421ebe55eed3 );                      
        SDK_FIXED_SIZE( express_link_t, 0x28 );                                    
    };                                                                             
};
#include "magic/express_link_t.end.hpp"
SDK_VERIFY( struct pci::express_link_t, 0x28 );
