#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/qmatrix_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Qmatrix_H264]
    // => WDK 10 (NV)
    //
    struct qmatrix_h264_t                                              
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 sdk::array<sdk::array<uint8_t, 16>, 6> b_scaling_lists4x4;  //{ +0x0000    } | .bScalingLists4x4
        _m01 sdk::array<sdk::array<uint8_t, 64>, 2> b_scaling_lists8x8;  //{ +0x0060    } | .bScalingLists8x8
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_Qmatrix_H264.$", 0x0, false, 0x118f1d6e75942cb7 );                   
        SDK_FIXED_SIZE( qmatrix_h264_t, 0xe0 );                        
    };                                                                 
};
#include "magic/qmatrix_h264_t.end.hpp"
SDK_VERIFY( struct dxva::qmatrix_h264_t, 0xe0 );
