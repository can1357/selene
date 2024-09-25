#pragma once
#include <sdkgen/support_library.hpp>
#include "dirtyregions_t.hpp"
#include "../../tag/rect_t.hpp"
#include "../../tag/point_t.hpp"

#include "magic/gdimodel_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct gdimodel_presenthistorytoken_t                       
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint64_t                        h_logical_surface;   //{ +0x0000    } | .hLogicalSurface
        _m01 uint64_t                        h_physical_surface;  //{ +0x0008    } | .hPhysicalSurface
        _m02 struct tag::rect_t              scroll_rect;         //{ +0x0010    } | .ScrollRect
        _m03 struct tag::point_t             scroll_offset;       //{ +0x0020    } | .ScrollOffset
        _m04 struct d3dk::mt::dirtyregions_t dirty_regions;       //{ +0x0028    } | .DirtyRegions
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN.$", 0x0, false, 0xf9234741f37ebf24 );                   
        SDK_FIXED_SIZE( gdimodel_presenthistorytoken_t, 0x130 );                   
    };                                                          
};
#include "magic/gdimodel_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::gdimodel_presenthistorytoken_t, 0x130 );
