#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_set_acp_and_cgmsa_signaling_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_set_acp_and_cgmsa_signaling_parameters_t            
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                ul_new_tv_protection_standard;  //{ +0x0000    } | .ulNewTVProtectionStandard
        _m01 uint32_t                ul_aspect_ratio_change_mask1;   //{ +0x0004    } | .ulAspectRatioChangeMask1
        _m02 uint32_t                ul_aspect_ratio_data1;          //{ +0x0008    } | .ulAspectRatioData1
        _m03 uint32_t                ul_aspect_ratio_change_mask2;   //{ +0x000c    } | .ulAspectRatioChangeMask2
        _m04 uint32_t                ul_aspect_ratio_data2;          //{ +0x0010    } | .ulAspectRatioData2
        _m05 uint32_t                ul_aspect_ratio_change_mask3;   //{ +0x0014    } | .ulAspectRatioChangeMask3
        _m06 uint32_t                ul_aspect_ratio_data3;          //{ +0x0018    } | .ulAspectRatioData3
        _m07 sdk::array<uint32_t, 4> ul_reserved;                    //{ +0x001c    } | .ulReserved
        _m08 sdk::array<uint32_t, 4> ul_reserved2;                   //{ +0x002c    } | .ulReserved2
        _m09 uint32_t                ul_reserved3;                   //{ +0x003c    } | .ulReserved3
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.$", 0x0, false, 0xa47f751826e734fa );                              
        SDK_FIXED_SIZE( opm_set_acp_and_cgmsa_signaling_parameters_t, 0x40 );                              
    };                                                             
};
#include "magic/opm_set_acp_and_cgmsa_signaling_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_set_acp_and_cgmsa_signaling_parameters_t, 0x40 );
