#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pic_resample_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicResample]
    // => WDK 10 (NV)
    //
    struct pic_resample_t                              
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint16_t w_pic_resample_source_pic_index;   //{ +0x0000    } | .wPicResampleSourcePicIndex
        _m01 uint16_t w_pic_resample_dest_pic_index;     //{ +0x0002    } | .wPicResampleDestPicIndex
        _m02 uint16_t w_pic_resample_rcontrol;           //{ +0x0004    } | .wPicResampleRcontrol
        _m03 uint8_t  b_pic_resample_extrap_width;       //{ +0x0006    } | .bPicResampleExtrapWidth
        _m04 uint8_t  b_pic_resample_extrap_height;      //{ +0x0007    } | .bPicResampleExtrapHeight
        _m05 uint32_t dw_pic_resample_source_width;      //{ +0x0008    } | .dwPicResampleSourceWidth
        _m06 uint32_t dw_pic_resample_source_height;     //{ +0x000c    } | .dwPicResampleSourceHeight
        _m07 uint32_t dw_pic_resample_dest_width;        //{ +0x0010    } | .dwPicResampleDestWidth
        _m08 uint32_t dw_pic_resample_dest_height;       //{ +0x0014    } | .dwPicResampleDestHeight
        _m09 uint32_t dw_pic_resample_full_dest_width;   //{ +0x0018    } | .dwPicResampleFullDestWidth
        _m10 uint32_t dw_pic_resample_full_dest_height;  //{ +0x001c    } | .dwPicResampleFullDestHeight
                                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_PicResample.$", 0x0, false, 0x594738aba6a6ff45 );                                 
        SDK_FIXED_SIZE( pic_resample_t, 0x20 );                                 
    };                                                 
};
#include "magic/pic_resample_t.end.hpp"
SDK_VERIFY( struct dxva::pic_resample_t, 0x20 );
