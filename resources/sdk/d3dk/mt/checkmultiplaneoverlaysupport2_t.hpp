#pragma once
#include <sdkgen/support_library.hpp>
#include "check_multiplane_overlay_support_return_info_t.hpp"

#include "magic/checkmultiplaneoverlaysupport2_t.start.hpp"
namespace d3dk::mt
{
    struct check_multiplane_overlay_plane2_t;

    // [struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2]
    // => WDK 10 (NV)
    //
    struct checkmultiplaneoverlaysupport2_t       
    {                                             
        using p_overlay_planes_t =                                    struct d3dk::mt::check_multiplane_overlay_plane2_t*;                 
        using d3dkmt_check_multiplane_overlay_support_return_info_t = struct d3dk::mt::check_multiplane_overlay_support_return_info_t;                 
        using return_info_t =                                         d3dkmt_check_multiplane_overlay_support_return_info_t ;                 
                                                  
        // WDK 10                                 
        //                                        
        _m00 uint32_t            h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t            h_device;          //{ +0x0004    } | .hDevice
        _m02 uint32_t            plane_count;       //{ +0x0008    } | .PlaneCount
        _m03 p_overlay_planes_t  p_overlay_planes;  //{ +0x0010    } | .pOverlayPlanes
        _m04 int32_t             supported;         //{ +0x0018    } | .Supported
        _m05 return_info_t       return_info;       //{ +0x001c    } | .ReturnInfo
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.$", 0x0, false, 0x99445e113e9ec199 );                 
        SDK_FIXED_SIZE( checkmultiplaneoverlaysupport2_t, 0x20 );                 
    };                                            
};
#include "magic/checkmultiplaneoverlaysupport2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::checkmultiplaneoverlaysupport2_t, 0x20 );
