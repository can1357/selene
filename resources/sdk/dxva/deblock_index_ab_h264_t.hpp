#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/deblock_index_ab_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_DeblockIndexAB_H264]
    // => WDK 10 (NV)
    //
    struct deblock_index_ab_h264_t     
    {                                  
        // WDK 10                      
        //                             
        _m00 uint8_t b_index_ainternal;  //{ +0x0000    } | .bIndexAinternal
        _m01 uint8_t b_index_binternal;  //{ +0x0001    } | .bIndexBinternal
        _m02 uint8_t b_index_aleft0;     //{ +0x0002    } | .bIndexAleft0
        _m03 uint8_t b_index_bleft0;     //{ +0x0003    } | .bIndexBleft0
        _m04 uint8_t b_index_aleft1;     //{ +0x0004    } | .bIndexAleft1
        _m05 uint8_t b_index_bleft1;     //{ +0x0005    } | .bIndexBleft1
        _m06 uint8_t b_index_atop0;      //{ +0x0006    } | .bIndexAtop0
        _m07 uint8_t b_index_btop0;      //{ +0x0007    } | .bIndexBtop0
        _m08 uint8_t b_index_atop1;      //{ +0x0008    } | .bIndexAtop1
        _m09 uint8_t b_index_btop1;      //{ +0x0009    } | .bIndexBtop1
                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_DeblockIndexAB_H264.$", 0x0, false, 0x8915d9d4f2375c8a );                  
        SDK_FIXED_SIZE( deblock_index_ab_h264_t, 0xa );                  
    };                                 
};
#include "magic/deblock_index_ab_h264_t.end.hpp"
SDK_VERIFY( struct dxva::deblock_index_ab_h264_t, 0xa );
