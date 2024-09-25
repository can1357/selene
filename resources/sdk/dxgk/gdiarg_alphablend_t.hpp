#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/gdiarg_alphablend_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GDIARG_ALPHABLEND]
    // => WDK 10 (NV)
    //
    struct gdiarg_alphablend_t                         
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 struct tag::rect_t  src_rect;               //{ +0x0000    } | .SrcRect
        _m01 struct tag::rect_t  dst_rect;               //{ +0x0010    } | .DstRect
        _m02 uint32_t            src_allocation_index;   //{ +0x0020    } | .SrcAllocationIndex
        _m03 uint32_t            dst_allocation_index;   //{ +0x0024    } | .DstAllocationIndex
        _m04 uint32_t            num_sub_rects;          //{ +0x0028    } | .NumSubRects
        _m05 struct tag::rect_t* p_sub_rects;            //{ +0x0030    } | .pSubRects
        _m06 uint8_t             source_constant_alpha;  //{ +0x0038    } | .SourceConstantAlpha
        _m07 uint8_t             source_has_alpha;       //{ +0x0039    } | .SourceHasAlpha
        _m08 uint32_t            src_pitch;              //{ +0x003c    } | .SrcPitch
                                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_GDIARG_ALPHABLEND.$", 0x0, false, 0xb161274a6fe0683f );                      
        SDK_FIXED_SIZE( gdiarg_alphablend_t, 0x40 );                      
    };                                                 
};
#include "magic/gdiarg_alphablend_t.end.hpp"
SDK_VERIFY( struct dxgk::gdiarg_alphablend_t, 0x40 );
