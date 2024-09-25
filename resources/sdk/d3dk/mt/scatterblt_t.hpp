#pragma once
#include <sdkgen/support_library.hpp>
#include "../../tag/rect_t.hpp"
#include "../../tag/point_t.hpp"

#include "magic/scatterblt_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SCATTERBLT]
    // => WDK 10 (NV)
    //
    struct scatterblt_t                                             
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint64_t            h_logical_surface_destination;       //{ +0x0000    } | .hLogicalSurfaceDestination
        _m01 int64_t             h_destination_comp_surf_dwm;         //{ +0x0008    } | .hDestinationCompSurfDWM
        _m02 uint64_t            destination_composition_binding_id;  //{ +0x0010    } | .DestinationCompositionBindingId
        _m03 struct tag::rect_t  source_rect;                         //{ +0x0018    } | .SourceRect
        _m04 struct tag::point_t destination_offset;                  //{ +0x0028    } | .DestinationOffset
                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SCATTERBLT.$", 0x0, false, 0xed9088a15d18d462 );                                   
        SDK_FIXED_SIZE( scatterblt_t, 0x30 );                                   
    };                                                              
};
#include "magic/scatterblt_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::scatterblt_t, 0x30 );
