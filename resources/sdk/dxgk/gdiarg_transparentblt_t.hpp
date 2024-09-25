#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "../nt/d3dkm_transparentbltflags_t.hpp"

#include "magic/gdiarg_transparentblt_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GDIARG_TRANSPARENTBLT]
    // => WDK 10 (NV)
    //
    struct gdiarg_transparentblt_t                                       
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 struct tag::rect_t                     src_rect;              //{ +0x0000    } | .SrcRect
        _m01 struct tag::rect_t                     dst_rect;              //{ +0x0010    } | .DstRect
        _m02 uint32_t                               src_allocation_index;  //{ +0x0020    } | .SrcAllocationIndex
        _m03 uint32_t                               dst_allocation_index;  //{ +0x0024    } | .DstAllocationIndex
        _m04 uint32_t                               color;                 //{ +0x0028    } | .Color
        _m05 uint32_t                               num_sub_rects;         //{ +0x002c    } | .NumSubRects
        _m06 struct tag::rect_t*                    p_sub_rects;           //{ +0x0030    } | .pSubRects
        _m07 struct nt::d3dkm_transparentbltflags_t flags;                 //{ +0x0038    } | .Flags
        _m08 uint32_t                               src_pitch;             //{ +0x003c    } | .SrcPitch
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_GDIARG_TRANSPARENTBLT.$", 0x0, false, 0x46503a2a277f7f10 );                     
        SDK_FIXED_SIZE( gdiarg_transparentblt_t, 0x40 );                     
    };                                                                   
};
#include "magic/gdiarg_transparentblt_t.end.hpp"
SDK_VERIFY( struct dxgk::gdiarg_transparentblt_t, 0x40 );
