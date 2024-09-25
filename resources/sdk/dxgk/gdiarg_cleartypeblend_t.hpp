#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/gdiarg_cleartypeblend_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GDIARG_CLEARTYPEBLEND]
    // => WDK 10 (NV)
    //
    struct gdiarg_cleartypeblend_t                           
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 struct tag::rect_t  dst_rect;                     //{ +0x0000    } | .DstRect
        _m01 uint32_t            tmp_surf_allocation_index;    //{ +0x0010    } | .TmpSurfAllocationIndex
        _m02 uint32_t            gamma_surf_allocation_index;  //{ +0x0014    } | .GammaSurfAllocationIndex
        _m03 uint32_t            alpha_surf_allocation_index;  //{ +0x0018    } | .AlphaSurfAllocationIndex
        _m04 uint32_t            dst_allocation_index;         //{ +0x001c    } | .DstAllocationIndex
        _m05 int32_t             dst_to_alpha_offset_x;        //{ +0x0020    } | .DstToAlphaOffsetX
        _m06 int32_t             dst_to_alpha_offset_y;        //{ +0x0024    } | .DstToAlphaOffsetY
        _m07 uint32_t            color;                        //{ +0x0028    } | .Color
        _m08 uint32_t            gamma;                        //{ +0x002c    } | .Gamma
        _m09 uint32_t            num_sub_rects;                //{ +0x0030    } | .NumSubRects
        _m10 struct tag::rect_t* p_sub_rects;                  //{ +0x0038    } | .pSubRects
        _m11 uint32_t            alpha_surf_pitch;             //{ +0x0040    } | .AlphaSurfPitch
        _m12 uint32_t            color2;                       //{ +0x0044    } | .Color2
                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_GDIARG_CLEARTYPEBLEND.$", 0x0, false, 0xe561a46fb896a7ff );                            
        SDK_FIXED_SIZE( gdiarg_cleartypeblend_t, 0x48 );                            
    };                                                       
};
#include "magic/gdiarg_cleartypeblend_t.end.hpp"
SDK_VERIFY( struct dxgk::gdiarg_cleartypeblend_t, 0x48 );
