#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_random_number_t.hpp"

#include "magic/opm_acp_and_cgmsa_signaling_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING]
    // => WDK 10 (NV)
    //
    struct opm_acp_and_cgmsa_signaling_t                                                
    {                                                                                   
        // WDK 10                                                                       
        //                                                                              
        _m00 struct dxgk::mdt::opm_random_number_t rn_random_number;                      //{ +0x0000    } | .rnRandomNumber
        _m01 uint32_t                              ul_status_flags;                       //{ +0x0010    } | .ulStatusFlags
        _m02 uint32_t                              ul_available_tv_protection_standards;  //{ +0x0014    } | .ulAvailableTVProtectionStandards
        _m03 uint32_t                              ul_active_tv_protection_standard;      //{ +0x0018    } | .ulActiveTVProtectionStandard
        _m04 uint32_t                              ul_reserved;                           //{ +0x001c    } | .ulReserved
        _m05 uint32_t                              ul_aspect_ratio_valid_mask1;           //{ +0x0020    } | .ulAspectRatioValidMask1
        _m06 uint32_t                              ul_aspect_ratio_data1;                 //{ +0x0024    } | .ulAspectRatioData1
        _m07 uint32_t                              ul_aspect_ratio_valid_mask2;           //{ +0x0028    } | .ulAspectRatioValidMask2
        _m08 uint32_t                              ul_aspect_ratio_data2;                 //{ +0x002c    } | .ulAspectRatioData2
        _m09 uint32_t                              ul_aspect_ratio_valid_mask3;           //{ +0x0030    } | .ulAspectRatioValidMask3
        _m10 uint32_t                              ul_aspect_ratio_data3;                 //{ +0x0034    } | .ulAspectRatioData3
        _m11 sdk::array<uint32_t, 4>               ul_reserved2;                          //{ +0x0038    } | .ulReserved2
        _m12 sdk::array<uint32_t, 4>               ul_reserved3;                          //{ +0x0048    } | .ulReserved3
                                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.$", 0x0, false, 0xf4e355d6bb40fcf6 );                                     
        SDK_FIXED_SIZE( opm_acp_and_cgmsa_signaling_t, 0x58 );                                     
    };                                                                                  
};
#include "magic/opm_acp_and_cgmsa_signaling_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_acp_and_cgmsa_signaling_t, 0x58 );
