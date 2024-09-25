#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct rect_t; }

#include "magic/present_rgns_t.start.hpp"
namespace d3dk::mt
{
    struct move_rect_t;

    // [struct _D3DKMT_PRESENT_RGNS]
    // => WDK 10 (NV)
    //
    struct present_rgns_t                                         
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                            dirty_rect_count;  //{ +0x0000    } | .DirtyRectCount
        _m01 const struct tag::rect_t*           p_dirty_rects;     //{ +0x0008    } | .pDirtyRects
        _m02 uint32_t                            move_rect_count;   //{ +0x0010    } | .MoveRectCount
        _m03 const struct d3dk::mt::move_rect_t* p_move_rects;      //{ +0x0018    } | .pMoveRects
                                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_RGNS.$", 0x0, false, 0xac45e0ecefeacc44 );                 
        SDK_FIXED_SIZE( present_rgns_t, 0x20 );                   
    };                                                            
};
#include "magic/present_rgns_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_rgns_t, 0x20 );
