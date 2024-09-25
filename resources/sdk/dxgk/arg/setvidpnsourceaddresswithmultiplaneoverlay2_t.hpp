#pragma once
#include <sdkgen/support_library.hpp>
#include "../setvidpnsourceaddress_flags_t.hpp"

namespace dxgk { struct multiplane_overlay_plane2_t; }

#include "magic/setvidpnsourceaddresswithmultiplaneoverlay2_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceaddresswithmultiplaneoverlay2_t                 
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                                   context_count;     //{ +0x0000    } | .ContextCount
        _m01 sdk::array<void*, 65>                      context;           //{ +0x0008    } | .Context
        _m02 struct dxgk::setvidpnsourceaddress_flags_t flags;             //{ +0x0210    } | .Flags
        _m03 uint32_t                                   vid_pn_source_id;  //{ +0x0214    } | .VidPnSourceId
        _m04 uint32_t                                   plane_count;       //{ +0x0218    } | .PlaneCount
        _m05 struct dxgk::multiplane_overlay_plane2_t*  p_planes;          //{ +0x0220    } | .pPlanes
        _m06 uint32_t                                   duration;          //{ +0x0228    } | .Duration
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.$", 0x0, false, 0xcebc3524c3c80cc0 );                 
        SDK_FIXED_SIZE( setvidpnsourceaddresswithmultiplaneoverlay2_t, 0x230 );                 
    };                                                                   
};
#include "magic/setvidpnsourceaddresswithmultiplaneoverlay2_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvidpnsourceaddresswithmultiplaneoverlay2_t, 0x230 );
