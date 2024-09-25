#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_ptm_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PTM_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_ptm_control_register_t    
    {                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint1_t  enable;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Enable
        _m01 uint1_t  root_select;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RootSelect
        _m02 uint6_t  rsvd;                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd
        _m03 uint8_t  effective_granularity;  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EffectiveGranularity
        _m04 uint16_t rsvd2;                  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Rsvd2
        _m05 uint32_t as_ulong;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                            
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PTM_CONTROL_REGISTER.$", 0x4, true, 0x517d21d3fe8ccdcf );                      
        SDK_FIXED_SIZE( express_ptm_control_register_t, 0x4 );                      
    };                                      
};
#include "magic/express_ptm_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_ptm_control_register_t, 0x4 );
