#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_control_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_CONTROL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_control_t          
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint7_t  rsvd1;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd1
        _m01 uint1_t  gtlb_enable;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .GTLB_Enable
        _m02 uint1_t  ap_enable;    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .AP_Enable
        _m03 uint1_t  cal_disable;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .CAL_Disable
        _m04 uint22_t rsvd2;        //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Rsvd2
                                  
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_CONTROL.$", 0x4, true, 0x2f06ec398345d5bd );            
        SDK_FIXED_SIZE( agp_control_t, 0x4 );            
    };                            
};
#include "magic/agp_control_t.end.hpp"
SDK_VERIFY( struct pci::agp_control_t, 0x4 );
