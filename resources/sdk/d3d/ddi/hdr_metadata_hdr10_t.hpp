#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hdr_metadata_hdr10_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_HDR_METADATA_HDR10]
    // => WDK 10 (NV)
    //
    struct hdr_metadata_hdr10_t                                    
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::array<uint16_t, 2> red_primary;                    //{ +0x0000    } | .RedPrimary
        _m01 sdk::array<uint16_t, 2> green_primary;                  //{ +0x0004    } | .GreenPrimary
        _m02 sdk::array<uint16_t, 2> blue_primary;                   //{ +0x0008    } | .BluePrimary
        _m03 sdk::array<uint16_t, 2> white_point;                    //{ +0x000c    } | .WhitePoint
        _m04 uint32_t                max_mastering_luminance;        //{ +0x0010    } | .MaxMasteringLuminance
        _m05 uint32_t                min_mastering_luminance;        //{ +0x0014    } | .MinMasteringLuminance
        _m06 uint16_t                max_content_light_level;        //{ +0x0018    } | .MaxContentLightLevel
        _m07 uint16_t                max_frame_average_light_level;  //{ +0x001a    } | .MaxFrameAverageLightLevel
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DDDI_HDR_METADATA_HDR10.$", 0x0, false, 0x87ea3089e71a831 );                              
        SDK_FIXED_SIZE( hdr_metadata_hdr10_t, 0x1c );                              
    };                                                             
};
#include "magic/hdr_metadata_hdr10_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::hdr_metadata_hdr10_t, 0x1c );
