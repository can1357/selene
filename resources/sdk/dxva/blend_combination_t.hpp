#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "ayu_vsample2_t.hpp"

#include "magic/blend_combination_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_BlendCombination]
    // => WDK 10 (NV)
    //
    struct blend_combination_t                                       
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint16_t                    w_picture_source_index;       //{ +0x0000    } | .wPictureSourceIndex
        _m01 uint16_t                    w_blended_destination_index;  //{ +0x0002    } | .wBlendedDestinationIndex
        _m02 struct tag::rect_t          picture_source_rect16th_pel;  //{ +0x0004    } | .PictureSourceRect16thPel
        _m03 struct tag::rect_t          picture_destination_rect;     //{ +0x0014    } | .PictureDestinationRect
        _m04 struct tag::rect_t          graphic_source_rect;          //{ +0x0024    } | .GraphicSourceRect
        _m05 struct tag::rect_t          graphic_destination_rect;     //{ +0x0034    } | .GraphicDestinationRect
        _m06 uint16_t                    w_blend_delay;                //{ +0x0044    } | .wBlendDelay
        _m07 uint8_t                     b_blend_on;                   //{ +0x0046    } | .bBlendOn
        _m08 uint8_t                     b_whole_plane_alpha;          //{ +0x0047    } | .bWholePlaneAlpha
        _m09 struct dxva::ayu_vsample2_t outside_yu_vcolor;            //{ +0x0048    } | .OutsideYUVcolor
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXVA_BlendCombination.$", 0x0, false, 0xc3a63f0c9d27dd30 );                            
        SDK_FIXED_SIZE( blend_combination_t, 0x4c );                            
    };                                                               
};
#include "magic/blend_combination_t.end.hpp"
SDK_VERIFY( struct dxva::blend_combination_t, 0x4c );
