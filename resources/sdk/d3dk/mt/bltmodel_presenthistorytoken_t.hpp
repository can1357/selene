#pragma once
#include <sdkgen/support_library.hpp>
#include "dirtyregions_t.hpp"

#include "magic/bltmodel_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct bltmodel_presenthistorytoken_t                       
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint64_t                        h_logical_surface;   //{ +0x0000    } | .hLogicalSurface
        _m01 uint64_t                        h_physical_surface;  //{ +0x0008    } | .hPhysicalSurface
        _m02 uint64_t                        event_id;            //{ +0x0010    } | .EventId
        _m03 struct d3dk::mt::dirtyregions_t dirty_regions;       //{ +0x0018    } | .DirtyRegions
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN.$", 0x0, false, 0x8c10d092cb92a99 );                   
        SDK_FIXED_SIZE( bltmodel_presenthistorytoken_t, 0x120 );                   
    };                                                          
};
#include "magic/bltmodel_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::bltmodel_presenthistorytoken_t, 0x120 );
