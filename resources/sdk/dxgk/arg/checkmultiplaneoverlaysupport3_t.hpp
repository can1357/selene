#pragma once
#include <sdkgen/support_library.hpp>
#include "../check_multiplane_overlay_support_return_info_t.hpp"

namespace dxgk { struct multiplane_overlay_plane_with_source2_t;           }
namespace dxgk { struct multiplane_overlay_post_composition_with_source_t; }

#include "magic/checkmultiplaneoverlaysupport3_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3]
    // => WDK 10 (NV)
    //
    struct checkmultiplaneoverlaysupport3_t                
    {                                                      
        using pp_planes_t =                                         struct dxgk::multiplane_overlay_plane_with_source2_t**;                       
        using pp_post_composition_t =                               struct dxgk::multiplane_overlay_post_composition_with_source_t**;                       
        using dxgk_check_multiplane_overlay_support_return_info_t = struct dxgk::check_multiplane_overlay_support_return_info_t;                       
        using return_info_t =                                       dxgk_check_multiplane_overlay_support_return_info_t ;                       
                                                           
        // WDK 10                                          
        //                                                 
        _m00 uint32_t               plane_count;             //{ +0x0000    } | .PlaneCount
        _m01 pp_planes_t            pp_planes;               //{ +0x0008    } | .ppPlanes
        _m02 uint32_t               post_composition_count;  //{ +0x0010    } | .PostCompositionCount
        _m03 pp_post_composition_t  pp_post_composition;     //{ +0x0018    } | .ppPostComposition
        _m04 int32_t                supported;               //{ +0x0020    } | .Supported
        _m05 return_info_t          return_info;             //{ +0x0024    } | .ReturnInfo
                                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.$", 0x0, false, 0x98b3b61a919eaa44 );                       
        SDK_FIXED_SIZE( checkmultiplaneoverlaysupport3_t, 0x28 );                       
    };                                                     
};
#include "magic/checkmultiplaneoverlaysupport3_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::checkmultiplaneoverlaysupport3_t, 0x28 );
