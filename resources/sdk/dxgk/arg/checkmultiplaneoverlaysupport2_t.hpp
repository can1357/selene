#pragma once
#include <sdkgen/support_library.hpp>
#include "../check_multiplane_overlay_support_return_info_t.hpp"

namespace dxgk { struct multiplane_overlay_plane_with_source_t; }

#include "magic/checkmultiplaneoverlaysupport2_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2]
    // => WDK 10 (NV)
    //
    struct checkmultiplaneoverlaysupport2_t
    {                                      
        using p_planes_t =                                          struct dxgk::multiplane_overlay_plane_with_source_t*;            
        using dxgk_check_multiplane_overlay_support_return_info_t = struct dxgk::check_multiplane_overlay_support_return_info_t;            
        using return_info_t =                                       dxgk_check_multiplane_overlay_support_return_info_t ;            
                                           
        // WDK 10                       
        //                              
        _m00 uint32_t       plane_count;     //{ +0x0000    } | .PlaneCount
        _m01 p_planes_t     p_planes;        //{ +0x0008    } | .pPlanes
        _m02 int32_t        supported;       //{ +0x0010    } | .Supported
        _m03 return_info_t  return_info;     //{ +0x0014    } | .ReturnInfo
                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2.$", 0x0, false, 0x224ec75416d5b4d7 );            
        SDK_FIXED_SIZE( checkmultiplaneoverlaysupport2_t, 0x18 );            
    };                                     
};
#include "magic/checkmultiplaneoverlaysupport2_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::checkmultiplaneoverlaysupport2_t, 0x18 );
