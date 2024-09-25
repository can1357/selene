#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/gdiarg_colorfill_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GDIARG_COLORFILL]
    // => WDK 10 (NV)
    //
    struct gdiarg_colorfill_t                         
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 struct tag::rect_t  dst_rect;              //{ +0x0000    } | .DstRect
        _m01 uint32_t            dst_allocation_index;  //{ +0x0010    } | .DstAllocationIndex
        _m02 uint32_t            num_sub_rects;         //{ +0x0014    } | .NumSubRects
        _m03 struct tag::rect_t* p_sub_rects;           //{ +0x0018    } | .pSubRects
        _m04 uint32_t            color;                 //{ +0x0020    } | .Color
        _m05 uint16_t            rop;                   //{ +0x0024    } | .Rop
        _m06 uint16_t            rop3;                  //{ +0x0026    } | .Rop3
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_GDIARG_COLORFILL.$", 0x0, false, 0x144f2184faac781e );                     
        SDK_FIXED_SIZE( gdiarg_colorfill_t, 0x28 );                     
    };                                                
};
#include "magic/gdiarg_colorfill_t.end.hpp"
SDK_VERIFY( struct dxgk::gdiarg_colorfill_t, 0x28 );
