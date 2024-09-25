#pragma once
#include <sdkgen/support_library.hpp>
#include "../check_multiplane_overlay_support_return_info_t.hpp"

namespace dxgk { struct check_multiplane_overlay_support_plane_t; }

#include "magic/checkmultiplaneoverlaysupport_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT]
    // => WDK 10 (NV)
    //
    struct checkmultiplaneoverlaysupport_t
    {                                     
        using p_planes_t =                                          struct dxgk::check_multiplane_overlay_support_plane_t*;            
        using dxgk_check_multiplane_overlay_support_return_info_t = struct dxgk::check_multiplane_overlay_support_return_info_t;            
        using return_info_t =                                       dxgk_check_multiplane_overlay_support_return_info_t ;            
                                          
        // WDK 10                       
        //                              
        _m00 uint32_t       plane_count;    //{ +0x0000    } | .PlaneCount
        _m01 p_planes_t     p_planes;       //{ +0x0008    } | .pPlanes
        _m02 int32_t        supported;      //{ +0x0010    } | .Supported
        _m03 return_info_t  return_info;    //{ +0x0014    } | .ReturnInfo
                                          
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT.$", 0x0, false, 0x146d088b11466883 );            
        SDK_FIXED_SIZE( checkmultiplaneoverlaysupport_t, 0x18 );            
    };                                    
};
#include "magic/checkmultiplaneoverlaysupport_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::checkmultiplaneoverlaysupport_t, 0x18 );
