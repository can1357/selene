#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_status_signaling_cmd_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPStatusSignalingCmdData]
    // => WDK 10 (NV)
    //
    struct copp_status_signaling_cmd_data_t                            
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 struct nt::guid_t       r_app;                              //{ +0x0000    } | .rApp
        _m01 uint32_t                dw_flags;                           //{ +0x0010    } | .dwFlags
        _m02 uint32_t                available_tv_protection_standards;  //{ +0x0014    } | .AvailableTVProtectionStandards
        _m03 uint32_t                active_tv_protection_standard;      //{ +0x0018    } | .ActiveTVProtectionStandard
        _m04 uint32_t                tv_type;                            //{ +0x001c    } | .TVType
        _m05 uint32_t                aspect_ratio_valid_mask1;           //{ +0x0020    } | .AspectRatioValidMask1
        _m06 uint32_t                aspect_ratio_data1;                 //{ +0x0024    } | .AspectRatioData1
        _m07 uint32_t                aspect_ratio_valid_mask2;           //{ +0x0028    } | .AspectRatioValidMask2
        _m08 uint32_t                aspect_ratio_data2;                 //{ +0x002c    } | .AspectRatioData2
        _m09 uint32_t                aspect_ratio_valid_mask3;           //{ +0x0030    } | .AspectRatioValidMask3
        _m10 uint32_t                aspect_ratio_data3;                 //{ +0x0034    } | .AspectRatioData3
        _m11 sdk::array<uint32_t, 4> extended_info_valid_mask;           //{ +0x0038    } | .ExtendedInfoValidMask
        _m12 sdk::array<uint32_t, 4> extended_info_data;                 //{ +0x0048    } | .ExtendedInfoData
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPStatusSignalingCmdData.$", 0x0, false, 0xadc77f44614c79dd );                                  
        SDK_FIXED_SIZE( copp_status_signaling_cmd_data_t, 0x58 );                                  
    };                                                                 
};
#include "magic/copp_status_signaling_cmd_data_t.end.hpp"
SDK_VERIFY( struct dxva::copp_status_signaling_cmd_data_t, 0x58 );
