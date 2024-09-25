#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/gdiarg_bitblt_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GDIARG_BITBLT]
    // => WDK 10 (NV)
    //
    struct gdiarg_bitblt_t                            
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 struct tag::rect_t  src_rect;              //{ +0x0000    } | .SrcRect
        _m01 struct tag::rect_t  dst_rect;              //{ +0x0010    } | .DstRect
        _m02 uint32_t            src_allocation_index;  //{ +0x0020    } | .SrcAllocationIndex
        _m03 uint32_t            dst_allocation_index;  //{ +0x0024    } | .DstAllocationIndex
        _m04 uint32_t            num_sub_rects;         //{ +0x0028    } | .NumSubRects
        _m05 struct tag::rect_t* p_sub_rects;           //{ +0x0030    } | .pSubRects
        _m06 uint16_t            rop;                   //{ +0x0038    } | .Rop
        _m07 uint16_t            rop3;                  //{ +0x003a    } | .Rop3
        _m08 uint32_t            src_pitch;             //{ +0x003c    } | .SrcPitch
        _m09 uint32_t            dst_pitch;             //{ +0x0040    } | .DstPitch
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_GDIARG_BITBLT.$", 0x0, false, 0x99f904dd5ca0738 );                     
        SDK_FIXED_SIZE( gdiarg_bitblt_t, 0x48 );                     
    };                                                
};
#include "magic/gdiarg_bitblt_t.end.hpp"
SDK_VERIFY( struct dxgk::gdiarg_bitblt_t, 0x48 );
