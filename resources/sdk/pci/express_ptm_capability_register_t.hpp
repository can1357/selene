#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_ptm_capability_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_ptm_capability_register_t
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint1_t  requester_capable;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RequesterCapable
        _m01 uint1_t  responder_capable;     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ResponderCapable
        _m02 uint1_t  root_capable;          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .RootCapable
        _m03 uint5_t  rsvd;                  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd
        _m04 uint8_t  local_granularity;     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .LocalGranularity
        _m05 uint16_t rsvd2;                 //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Rsvd2
        _m06 uint32_t as_ulong;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                           
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.$", 0x4, true, 0x3ab1b4a3606280e8 );                  
        SDK_FIXED_SIZE( express_ptm_capability_register_t, 0x4 );                  
    };                                     
};
#include "magic/express_ptm_capability_register_t.end.hpp"
SDK_VERIFY( union pci::express_ptm_capability_register_t, 0x4 );
