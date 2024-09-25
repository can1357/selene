#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/gdiarg_stretchblt_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GDIARG_STRETCHBLT]
    // => WDK 10 (NV)
    //
    struct gdiarg_stretchblt_t                        
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 struct tag::rect_t  src_rect;              //{ +0x0000    } | .SrcRect
        _m01 struct tag::rect_t  dst_rect;              //{ +0x0010    } | .DstRect
        _m02 uint32_t            dst_allocation_index;  //{ +0x0020    } | .DstAllocationIndex
        _m03 uint32_t            src_allocation_index;  //{ +0x0024    } | .SrcAllocationIndex
        _m04 uint32_t            num_sub_rects;         //{ +0x0028    } | .NumSubRects
        _m05 struct tag::rect_t* p_sub_rects;           //{ +0x0030    } | .pSubRects
        _m06 uint16_t            mode;                  //{ +0x0038@0  } | .Mode
        _m07 uint1_t             mirror_x;              //{ +0x0038@16 } | .MirrorX
        _m08 uint1_t             mirror_y;              //{ +0x0038@17 } | .MirrorY
        _m09 uint32_t            flags;                 //{ +0x0038    } | .Flags
        _m10 uint32_t            src_pitch;             //{ +0x003c    } | .SrcPitch
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_GDIARG_STRETCHBLT.$", 0x0, false, 0xed7cc01957368e6c );                     
        SDK_FIXED_SIZE( gdiarg_stretchblt_t, 0x40 );                     
    };                                                
};
#include "magic/gdiarg_stretchblt_t.end.hpp"
SDK_VERIFY( struct dxgk::gdiarg_stretchblt_t, 0x40 );
