#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_link_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_LINK_STATUS_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_link_status_register_t     
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint4_t  link_speed;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LinkSpeed
        _m01 uint6_t  link_width;              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .LinkWidth
        _m02 uint1_t  undefined;               //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Undefined
        _m03 uint1_t  link_training;           //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .LinkTraining
        _m04 uint1_t  slot_clock_config;       //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .SlotClockConfig
        _m05 uint1_t  data_link_layer_active;  //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .DataLinkLayerActive
        _m06 uint2_t  rsvd;                    //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Rsvd
        _m07 uint16_t as_ushort;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                             
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LINK_STATUS_REGISTER.$", 0x2, true, 0x31f479921fdc283f );                       
        SDK_FIXED_SIZE( express_link_status_register_t, 0x2 );                       
    };                                       
};
#include "magic/express_link_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_link_status_register_t, 0x2 );
