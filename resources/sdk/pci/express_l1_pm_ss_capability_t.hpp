#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"
#include "express_l1_pm_ss_control_1_register_t.hpp"
#include "express_l1_pm_ss_control_2_register_t.hpp"
#include "express_l1_pm_ss_capabilities_register_t.hpp"

#include "magic/express_l1_pm_ss_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_L1_PM_SS_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_l1_pm_ss_capability_t                                            
    {                                                                               
        using l1_pm_ss_capabilities_t = union pci::express_l1_pm_ss_capabilities_register_t;                      
                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                          
        _m00 struct pci::express_enhanced_capability_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 l1_pm_ss_capabilities_t                          l1_pm_ss_capabilities;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .L1PmSsCapabilities
        _m02 union pci::express_l1_pm_ss_control_1_register_t l1_pm_ss_control1;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .L1PmSsControl1
        _m03 union pci::express_l1_pm_ss_control_2_register_t l1_pm_ss_control2;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .L1PmSsControl2
                                                                                    
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_L1_PM_SS_CAPABILITY.$", 0x10, true, 0xc742fe87916cae58 );                      
        SDK_FIXED_SIZE( express_l1_pm_ss_capability_t, 0x10 );                      
    };                                                                              
};
#include "magic/express_l1_pm_ss_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_l1_pm_ss_capability_t, 0x10 );
