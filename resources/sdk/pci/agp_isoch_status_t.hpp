#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_isoch_status_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_ISOCH_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_isoch_status_t    
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint2_t  error_code;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorCode
        _m01 uint1_t  rsvd1;       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd1
        _m02 uint3_t  isoch_l;     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Isoch_L
        _m03 uint2_t  isoch_y;     //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Isoch_Y
        _m04 uint8_t  isoch_n;     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Isoch_N
        _m05 uint16_t rsvd2;       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Rsvd2
                                 
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_ISOCH_STATUS.$", 0x4, true, 0xa979f5ba8f927053 );           
        SDK_FIXED_SIZE( agp_isoch_status_t, 0x4 );           
    };                           
};
#include "magic/agp_isoch_status_t.end.hpp"
SDK_VERIFY( struct pci::agp_isoch_status_t, 0x4 );
