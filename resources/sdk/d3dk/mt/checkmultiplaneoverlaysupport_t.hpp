#pragma once
#include <sdkgen/support_library.hpp>
#include "check_multiplane_overlay_support_return_info_t.hpp"

#include "magic/checkmultiplaneoverlaysupport_t.start.hpp"
namespace d3dk::mt
{
    struct check_multiplane_overlay_plane_t;

    // [struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT]
    // => WDK 10 (NV)
    //
    struct checkmultiplaneoverlaysupport_t        
    {                                             
        using p_overlay_planes_t =                                    struct d3dk::mt::check_multiplane_overlay_plane_t*;                 
        using d3dkmt_check_multiplane_overlay_support_return_info_t = struct d3dk::mt::check_multiplane_overlay_support_return_info_t;                 
        using return_info_t =                                         d3dkmt_check_multiplane_overlay_support_return_info_t ;                 
                                                  
        // WDK 10                                 
        //                                        
        _m00 uint32_t            h_device;          //{ +0x0000    } | .hDevice
        _m01 uint32_t            plane_count;       //{ +0x0004    } | .PlaneCount
        _m02 p_overlay_planes_t  p_overlay_planes;  //{ +0x0008    } | .pOverlayPlanes
        _m03 int32_t             supported;         //{ +0x0010    } | .Supported
        _m04 return_info_t       return_info;       //{ +0x0014    } | .ReturnInfo
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT.$", 0x0, false, 0x60360c8b2b0d6d25 );                 
        SDK_FIXED_SIZE( checkmultiplaneoverlaysupport_t, 0x18 );                 
    };                                            
};
#include "magic/checkmultiplaneoverlaysupport_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::checkmultiplaneoverlaysupport_t, 0x18 );
