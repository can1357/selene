#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copp_set_signaling_cmd_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPSetSignalingCmdData]
    // => WDK 10 (NV)
    //
    struct copp_set_signaling_cmd_data_t                           
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                active_tv_protection_standard;  //{ +0x0000    } | .ActiveTVProtectionStandard
        _m01 uint32_t                aspect_ratio_change_mask1;      //{ +0x0004    } | .AspectRatioChangeMask1
        _m02 uint32_t                aspect_ratio_data1;             //{ +0x0008    } | .AspectRatioData1
        _m03 uint32_t                aspect_ratio_change_mask2;      //{ +0x000c    } | .AspectRatioChangeMask2
        _m04 uint32_t                aspect_ratio_data2;             //{ +0x0010    } | .AspectRatioData2
        _m05 uint32_t                aspect_ratio_change_mask3;      //{ +0x0014    } | .AspectRatioChangeMask3
        _m06 uint32_t                aspect_ratio_data3;             //{ +0x0018    } | .AspectRatioData3
        _m07 sdk::array<uint32_t, 4> extended_info_change_mask;      //{ +0x001c    } | .ExtendedInfoChangeMask
        _m08 sdk::array<uint32_t, 4> extended_info_data;             //{ +0x002c    } | .ExtendedInfoData
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPSetSignalingCmdData.$", 0x0, false, 0x90abbd79054e2401 );                              
        SDK_FIXED_SIZE( copp_set_signaling_cmd_data_t, 0x40 );                              
    };                                                             
};
#include "magic/copp_set_signaling_cmd_data_t.end.hpp"
SDK_VERIFY( struct dxva::copp_set_signaling_cmd_data_t, 0x40 );
