#pragma once
#include <sdkgen/support_library.hpp>
#include "check_multiplane_overlay_support_return_info_t.hpp"

#include "magic/checkmultiplaneoverlaysupport3_t.start.hpp"
namespace d3dk::mt
{
    struct check_multiplane_overlay_plane3_t;
    struct multiplane_overlay_post_composition_with_source_t;

    // [struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3]
    // => WDK 10 (NV)
    //
    struct checkmultiplaneoverlaysupport3_t                
    {                                                      
        using pp_overlay_planes_t =                                   struct d3dk::mt::check_multiplane_overlay_plane3_t**;                       
        using pp_post_composition_t =                                 struct d3dk::mt::multiplane_overlay_post_composition_with_source_t**;                       
        using d3dkmt_check_multiplane_overlay_support_return_info_t = struct d3dk::mt::check_multiplane_overlay_support_return_info_t;                       
        using return_info_t =                                         d3dkmt_check_multiplane_overlay_support_return_info_t ;                       
                                                           
        // WDK 10                                          
        //                                                 
        _m00 uint32_t               h_adapter;               //{ +0x0000    } | .hAdapter
        _m01 uint32_t               h_device;                //{ +0x0004    } | .hDevice
        _m02 uint32_t               plane_count;             //{ +0x0008    } | .PlaneCount
        _m03 pp_overlay_planes_t    pp_overlay_planes;       //{ +0x0010    } | .ppOverlayPlanes
        _m04 uint32_t               post_composition_count;  //{ +0x0018    } | .PostCompositionCount
        _m05 pp_post_composition_t  pp_post_composition;     //{ +0x0020    } | .ppPostComposition
        _m06 int32_t                supported;               //{ +0x0028    } | .Supported
        _m07 return_info_t          return_info;             //{ +0x002c    } | .ReturnInfo
                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.$", 0x0, false, 0x501d47e9c23543e3 );                       
        SDK_FIXED_SIZE( checkmultiplaneoverlaysupport3_t, 0x30 );                       
    };                                                     
};
#include "magic/checkmultiplaneoverlaysupport3_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::checkmultiplaneoverlaysupport3_t, 0x30 );
