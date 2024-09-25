#pragma once
#include <sdkgen/support_library.hpp>
#include "../../tag/rect_t.hpp"
#include "../../tag/point_t.hpp"

#include "magic/move_rect_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MOVE_RECT]
    // => WDK 10 (NV)
    //
    struct move_rect_t                        
    {                                         
        // WDK 10                             
        //                                    
        _m00 struct tag::point_t source_point;  //{ +0x0000    } | .SourcePoint
        _m01 struct tag::rect_t  dest_rect;     //{ +0x0008    } | .DestRect
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MOVE_RECT.$", 0x0, false, 0x9d02de5bad5cc5fb );             
        SDK_FIXED_SIZE( move_rect_t, 0x18 );             
    };                                        
};
#include "magic/move_rect_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::move_rect_t, 0x18 );
