#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_block_device_characteristics_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_block_device_characteristics_page_t           
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint5_t                device_type;               //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t                device_type_qualifier;     //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t                page_code;                 //{ +0x0001    } | .PageCode
        _m03 uint8_t                page_length;               //{ +0x0003    } | .PageLength
        _m04 uint8_t                medium_rotation_rate_msb;  //{ +0x0004    } | .MediumRotationRateMsb
        _m05 uint8_t                medium_rotation_rate_lsb;  //{ +0x0005    } | .MediumRotationRateLsb
        _m06 uint8_t                medium_product_type;       //{ +0x0006    } | .MediumProductType
        _m07 uint4_t                nominal_form_factor;       //{ +0x0007@0  } | .NominalFormFactor
        _m08 uint2_t                wacereq;                   //{ +0x0007@4  } | .WACEREQ
        _m09 uint2_t                wabereq;                   //{ +0x0007@6  } | .WABEREQ
        _m10 uint1_t                vbuls;                     //{ +0x0008@0  } | .VBULS
        _m11 uint1_t                fuab;                      //{ +0x0008@1  } | .FUAB
        _m12 uint1_t                bocs;                      //{ +0x0008@2  } | .BOCS
        _m13 uint2_t                zoned;                     //{ +0x0008@4  } | .ZONED
        _m14 sdk::array<uint8_t, 4> depopulation_time;         //{ +0x000c    } | .DepopulationTime
                                                             
        SDK_NONVOL_PROPERTIES( "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.$", 0x0, false, 0xd62bce9c85b52d7c );                         
        SDK_FIXED_SIZE( vpd_block_device_characteristics_page_t, 0x40 );                         
    };                                                       
};
#include "magic/vpd_block_device_characteristics_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_block_device_characteristics_page_t, 0x40 );
