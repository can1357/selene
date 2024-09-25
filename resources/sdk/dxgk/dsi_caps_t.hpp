#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dsi_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DSI_CAPS]
    // => WDK 10 (NV)
    //
    struct dsi_caps_t                                   
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint8_t  dsi_type_major;                     //{ +0x0000    } | .DSITypeMajor
        _m01 uint8_t  dsi_type_minor;                     //{ +0x0001    } | .DSITypeMinor
        _m02 uint8_t  spec_version_major;                 //{ +0x0002    } | .SpecVersionMajor
        _m03 uint8_t  spec_version_minor;                 //{ +0x0003    } | .SpecVersionMinor
        _m04 uint8_t  spec_version_patch;                 //{ +0x0004    } | .SpecVersionPatch
        _m05 uint16_t target_maximum_return_packet_size;  //{ +0x0006    } | .TargetMaximumReturnPacketSize
        _m06 uint8_t  result_code_flags;                  //{ +0x0008    } | .ResultCodeFlags
        _m07 uint8_t  result_code_status;                 //{ +0x0009    } | .ResultCodeStatus
        _m08 uint8_t  revision;                           //{ +0x000a    } | .Revision
        _m09 uint8_t  level;                              //{ +0x000b    } | .Level
        _m10 uint8_t  device_class_hi;                    //{ +0x000c    } | .DeviceClassHi
        _m11 uint8_t  device_class_lo;                    //{ +0x000d    } | .DeviceClassLo
        _m12 uint8_t  manufacturer_hi;                    //{ +0x000e    } | .ManufacturerHi
        _m13 uint8_t  manufacturer_lo;                    //{ +0x000f    } | .ManufacturerLo
        _m14 uint8_t  product_hi;                         //{ +0x0010    } | .ProductHi
        _m15 uint8_t  product_lo;                         //{ +0x0011    } | .ProductLo
        _m16 uint8_t  length_hi;                          //{ +0x0012    } | .LengthHi
        _m17 uint8_t  length_lo;                          //{ +0x0013    } | .LengthLo
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_DSI_CAPS.$", 0x0, false, 0x431b2ba9a6504c4d );                                  
        SDK_FIXED_SIZE( dsi_caps_t, 0x14 );                                  
    };                                                  
};
#include "magic/dsi_caps_t.end.hpp"
SDK_VERIFY( struct dxgk::dsi_caps_t, 0x14 );
