#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/qmatrix_hevc_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Qmatrix_HEVC]
    // => WDK 10 (NV)
    //
    struct qmatrix_hevc_t                                                            
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m00 sdk::array<sdk::array<uint8_t, 16>, 6> uc_scaling_lists0;                 //{ +0x0000    } | .ucScalingLists0
        _m01 sdk::array<sdk::array<uint8_t, 64>, 6> uc_scaling_lists1;                 //{ +0x0060    } | .ucScalingLists1
        _m02 sdk::array<sdk::array<uint8_t, 64>, 6> uc_scaling_lists2;                 //{ +0x01e0    } | .ucScalingLists2
        _m03 sdk::array<sdk::array<uint8_t, 64>, 2> uc_scaling_lists3;                 //{ +0x0360    } | .ucScalingLists3
        _m04 sdk::array<uint8_t, 6>                 uc_scaling_list_dc_coef_size_id2;  //{ +0x03e0    } | .ucScalingListDCCoefSizeID2
        _m05 sdk::array<uint8_t, 2>                 uc_scaling_list_dc_coef_size_id3;  //{ +0x03e6    } | .ucScalingListDCCoefSizeID3
                                                                                     
        SDK_NONVOL_PROPERTIES( "_DXVA_Qmatrix_HEVC.$", 0x0, false, 0x519bf12d1c1e9322 );                                 
        SDK_FIXED_SIZE( qmatrix_hevc_t, 0x3e8 );                                     
    };                                                                               
};
#include "magic/qmatrix_hevc_t.end.hpp"
SDK_VERIFY( struct dxva::qmatrix_hevc_t, 0x3e8 );
